// Sort numbers in array (Least to Great)

#include <stdio.h>
#include<conio.h>

int main()
{
    int numbers[5], temp, total;

    // We get how many numbers to enter from the user
    printf("How many numbers will be entered in total? ");
    scanf("%d", &total);

    // We get numbers from the user
    for (int i = 0; i < total; i++) 
    {
        printf("%d. enter integer :", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < total - 1; i++) {
        for (int j = i + 1; j < total; j++) {
            if (numbers[i] > numbers[j]) {
                temp = numbers[i];                  // We keep the array[i] in the temp to avoid losing it
                numbers[i] = numbers[j];            // Save array[i] as array[j] which is smaller than array[i]
                numbers[j] = temp;                  // We save the value of array[i] to array[j]. We have stored this value in a temporary
            }
        }
    }

    for (int i = 0; i < total; i++) {
        printf("%d ", numbers[i]);
    }
}