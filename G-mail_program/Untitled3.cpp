#include <stdio.h>
#include <string.h>

int isValidLength(char a[]) {
    int len = strlen(a);
    return (len >= 11 && len <= 30);
}

int isLowerCase(char a[]) {
    int len = strlen(a);
    for (int i = 0; i < len; i++) {
        if (!(a[i] >= 'a' && a[i] <= 'z')) {
            return 0; // Not all characters are lowercase
        }
    }
    return 1; // All characters are lowercase
}

int hasNoSpaceOrSpecialChars(char a[]) {
    int len = strlen(a);
    for (int i = 0; i < len; i++) {
        if (!((a[i] >= 32 && a[i] <= 45) || a[i] == 47 || (a[i] >= 58 && a[i] <= 63) || (a[i] >= 91 && a[i] <= 96) || (a[i] >= 123 && a[i] <= 126))) {
            return 0; // Contains space or special characters
        }
    }
    return 1; // No space or special characters
}

int hasValidServiceProvider(char a[], char b[]) {
    int len = strlen(a);
    int l = len - 10;
    int c = 0;

    for (int i = l; i < len; i++) {
        if (a[i] == b[c]) {
            c++;
        }
    }

    return (c == 10); // True if the service provider is perfect
}

int isValidGmailID(char a[], char b[]) {
    return isValidLength(a) && isLowerCase(a) && hasNoSpaceOrSpecialChars(a) && hasValidServiceProvider(a, b);
}

int main() {
    char service_provider[] = "@gmail.com";
    char input_gmail[50];

    start:
    printf("\n\nEnter the Gmail ID you want: ");
    gets(input_gmail);

    if (isValidGmailID(input_gmail, service_provider)) {
        printf("Yes, the entered Gmail ID is valid.\n");
    } else {
        printf("Invalid Gmail ID. Please follow the correct format.\n");
        goto start;
    }

    return 0;
}
