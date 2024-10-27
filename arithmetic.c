//Proram to display arithmetic operations
#include<stdio.h>
void main()
{
    printf("\t\t\tARITHMETIC OPERATORS\n");

    int num1,num2,sum,diff,div,prod,rem,inc,dec;//num1 and num2 are the variable in which we will store the number given by user & others are arithmetic operations
   
    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);
   
    sum=num1+num2;//Addition, also '=' is the assignment operator
    printf("Addition: %d\n", sum); 

    diff=num1-num2;//Subtraction
    printf("Difference: %d\n", diff);

    prod=num1*num2;//Multiplication
    printf("Product: %d\n", prod);

    div=num1/num2;//Division
    printf("Division: %d\n", diff);

    rem=num1%num2;//Remainder after dividing first number by second
    printf("Remainder: %d\n", rem);  

    inc=++num1;//increases value by 1
    dec=--num2;//decreases value by 1
    printf("Increment of first number: %d\n", inc);
    printf("Decrement of second number: %d\n", dec);

    }