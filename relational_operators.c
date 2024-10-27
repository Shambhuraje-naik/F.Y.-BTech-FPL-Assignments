//Program to check for the largest number between given numbers
#include<stdio.h>
void main()
{
    printf("\t\t\tRELATIONAL OPERATORS\n");

    int a,b,c;
  
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    if(a==b || b==c || a==c)  //this is the relational equal to operator
    {
        if(a==b && b==c && a==c)
        {
            printf("All three numbers are equal\n");
        }
        else
        {
            printf("Two numbers are equal\n");
        }

    }
    else
    {
      printf("All numbers are different\n");
    }


    if(a>b)    //This is the relational greater than operator we can also use '>='(greater than equal to) operator
    {
        if(a>c)  
        {
            printf("The largest number is: %d\n", a);
        }
        else
        {
            printf("The largest number is: %d\n", c);
        }
    
    }
    else
    {
        printf("The largest number is: %d\n", b);
    }
    

}
//we can also use this code for smallest integer by using '<'(less than) operator