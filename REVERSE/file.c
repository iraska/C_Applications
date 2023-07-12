#include <stdio.h>

int main() 
{
    FILE* file;
    char text[100];

    // Creating or opening an existing file
    file = fopen("text.txt", "w");

    if (file == NULL) 
    {
        printf("The file could not be created or opened.\n");
        return 1;
    }

    // Write text to file
    printf("Enter the text: ");

    fgets(text, sizeof(text), stdin);
    fputs(text, file);

    // Closing the file
    fclose(file);

    // Reopen the file
    file = fopen("text.txt", "r");

    if (file == NULL) 
    {
        printf("The file could not be opened.\n");
        return 1;
    }

    // Reading and printing text
    printf("Text read from file:\n");

    while (fgets(text, sizeof(text), file) != NULL) 
    {
        printf("%s", text);
    }

    // Closing the file
    fclose(file);

    return 0;
}
