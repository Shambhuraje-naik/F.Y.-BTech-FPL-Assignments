//Program to test bitwise operators
#include <stdio.h>

void main() {
    printf("\t\t\t\tBITWISE OPERATORS\n");
    int num1, num2;

    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);

    printf("Bitwise AND (num1 & num2): %d\n", num1 & num2);// '&' is the bitwise AND operator

    printf("Bitwise OR (num1 | num2): %d\n", num1 | num2);// '|' is the bitwise OR operator

    printf("Bitwise XOR (num1 ^ num2): %d\n", num1 ^ num2);// '^' is the bitwise XOR operator

    printf("Bitwise NOT (~num1): %d\n", ~num1);// '~' is the bitwise NOT operator
    printf("Bitwise NOT (~num2): %d\n", ~num2);

    printf("Left Shift (num1 << 1): %d\n", num1 << 1);//'<<' is used to shift one binary digit to the left
    printf("Left Shift (num2 << 1): %d\n", num2 << 1);

    printf("Right Shift (num1 >> 1): %d\n", num1 >> 1);//'>>' is used to shift one binary digit to the right
    printf("Right Shift (num2 >> 1): %d\n", num2 >> 1);

}