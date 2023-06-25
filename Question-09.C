/*Write a program in C to find the square of any number using the function.*/

#include<stdio.h>

void sqr (int);

int main ()
{
        int x ; 
        printf("Enter a number : ");
        scanf("%d",&x);

        sqr(x);
        return 0;
}

void sqr(int a)
{
        printf("Square of %d is %d",a,a*a);
}
