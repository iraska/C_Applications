//#include <stdio.h>
//
//unsigned long long factorial(int n);
//
//int main() 
//{
//    int number;
//
//    printf("Enter a number: ");
//    scanf("%d", &number);
//
//    if (number < 0) {
//        printf("The factorial of negative numbers cannot be calculated.\n");
//        return 0;
//    }
//
//    unsigned long long result = factorial(number);
//
//    printf("Factorial of %d: %llu\n", number, result);
//
//    return 0;
//}
//
//unsigned long long factorial(int n) 
//{
//    if (n == 0)
//        return 1;
//    else
//        return n * factorial(n - 1);
//}
