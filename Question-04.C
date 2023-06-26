// Write a function to find the next prime number of a given number. (TSRS)

#include<stdio.h>

int nextprime(int);

int nextprime(int n)
{
        int i ,x ;

        for(x=n+1 ; x ; x++)
        {
                for(i=2 ; i<x ; i++)
                {
                        if(x%i==0)
                                break;
                }
                if(x==i)
                        break ;
        }
        return x ;
}

int main()
{
        int a;
        printf("enter a number : ");
        scanf("%d",&a);

        printf("next prime number of given number is %d",nextprime(a));
        return 0;
}
