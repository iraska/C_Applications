#include<stdio.h>
#include <locale.h>
#include<string.h>

int main()
{
    int i, length;
    int flag = 0;

    char str[1000];
    printf("Enter Text: ");

    gets(str);
    length = strlen(str);

    for (i = 0; i < length; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        printf("%s It is not a palindrome.", str);
    }
    else {
        printf("%s It is a palindrome..", str);
    }

    return 0;
}