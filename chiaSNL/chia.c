#include <stdio.h>
#include <string.h>

void multiply(char s1[], char s2[], char result[]) {
    int len1 = strlen(s1), len2 = strlen(s2);
    int temp[len1 + len2];
    for (int i = 0; i < len1 + len2; i++) {
        temp[i] = 0;
    }
    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int prod = (s1[i] - '0') * (s2[j] - '0');
            int sum = prod + temp[i + j + 1];
            temp[i + j] += sum / 10;
            temp[i + j + 1] = sum % 10;
        }
    }
    int i = 0;
    while (i < len1 + len2 - 1 && temp[i] == 0) {
        i++;
    }
    int j = 0;
    while (i < len1 + len2) {
        result[j++] = temp[i++] + '0';
    }
    result[j] = '\0';
}


int compare(char s1[], char s2[]) {
    int len1 = strlen(s1), len2 = strlen(s2);
    if (len1 < len2) return -1;
    if (len1 > len2) return 1;
    for (int i = 0; i < len1; i++) {
        if (s1[i] < s2[i]) return -1;
        if (s1[i] > s2[i]) return 1;
    }
    return 0;
}

void subtract(char s1[], char s2[], char result[]) {
    int len1 = strlen(s1), len2 = strlen(s2);
    int carry = 0, j = len2 - 1;
    for (int i = len1 - 1; i >= 0; i--) {
        int digit = s1[i] - '0' - carry;
        if (j >= 0) digit -= s2[j] - '0';
        if (digit < 0) {
            digit += 10;
            carry = 1;
        }
        else carry = 0;
        result[i] = digit + '0';
        j--;
    }
    while (result[0] == '0' && strlen(result) > 1) {
        for (int i = 0; i < strlen(result) - 1; i++)
            result[i] = result[i + 1];
        result[strlen(result) - 1] = '\0';
    }
}

void divide(char s1[], char s2[], char quotient[]) {
    int len1 = strlen(s1), len2 = strlen(s2);
    char remainder[1000];
    remainder[0] = '0';
    remainder[1] = '\0';
    for (int i = 0; i < len1; i++) {
        int k = strlen(remainder) - 1;
        remainder[k + 1] = s1[i];
        remainder[k + 2] = '\0';
        int x = 0, y = 9;
        while (x < y) {
            int mid = (x + y + 1) / 2;
            char prod[1000];
            char temp[2] = {(char)(mid + '0'), '\0'};
            multiply(s2, temp, prod);
            if (compare(prod, remainder) <= 0) x = mid;
            else y = mid - 1;
        }
        char prod[1000];
        char temp[2] = {(char)(x + '0'), '\0'};
        multiply(s2, temp, prod);
        char diff[1000];
        subtract(remainder, prod, diff);
        strcpy(remainder, diff);
        quotient[i] = x + '0';
    }
    quotient[len1] = '\0';
    for (int i = 1; i < strlen(quotient); i++)
    {
        printf("%c", quotient[i]);
    }
    
}

int main() {
    char s1[1000], s2[1000], quotient[1000];
    scanf("%s", s1);
    scanf("%s", s2);
    divide(s1, s2, quotient);
}
