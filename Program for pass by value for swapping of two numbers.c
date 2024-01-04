#include <stdio.h>
void swapByValue(int a, int b) 
{
    int temp = a;
    a = b;
    b = temp;
}
void swapByReference(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() 
{
    int num1 = 10, num2 = 20;
    printf("Original values: num1 = %d, num2 = %d\n", num1, num2);
    swapByValue(num1, num2);
    printf("After swapByValue: num1 = %d, num2 = %d\n", num1, num2);
    swapByReference(&num1, &num2);
    printf("After swapByReference: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

