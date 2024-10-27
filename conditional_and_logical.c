//Program to check if the numbers are odd/even and same/different
#include<stdio.h>
void main()
{
    printf("\t\t\t\tCONDITIONAL AND LOGICAL OPERATORS\n");

    int a,b,c,d,e;

    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);

    c=a%2==0 && b%2==0;
    (c==1) ? printf("Both numbers are even\n") : printf("At least one number is odd\n");//we used the logical and(&&)and ternary operator here

    d=a%2==0 || b%2==0;
    (d==1) ? printf("At least one number is even\n") : printf("Both numbers are odd\n");//we used the logical or(||)and ternary operator here

    (a==b) ? (e=1) : (e=0);
    (!e==0) ? printf("Both numbers are same\n") : printf("Both numbers are different\n");//we used the logical not(!) and ternary operator here
//'==' used above is the equal to relational operator
}
