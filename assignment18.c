#include <stdio.h>

int getLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}
void reverseString(char str[]) {
    int len = getLength(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}
int areEqual(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] != s2[i]) return 0;
        i++;
    }
    return 1;
}
int isPalindrome(char str[]) {
    int len = getLength(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) return 0;
    }
    return 1;
}
int isSubstring(char mainStr[], char sub[]) {
    int i, j;
    for (i = 0; mainStr[i] != '\0'; i++) {
        for (j = 0; sub[j] != '\0'; j++) {
            if (mainStr[i + j] != sub[j]) break;
        }
        if (sub[j] == '\0') return 1; // Found the whole substring
    }
    return 0;
}
int main() {
    char str1[100], str2[100], sub[50], temp[100];

    printf("Enter a string: ");
    scanf("%s", str1
