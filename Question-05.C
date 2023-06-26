// Write a function to print first N prime numbers (TSRN)

#include<stdio.h>

int nprime(int);

int nprime(int n)
{
        int i ,x=2 ;

        while(n)
        {
                for(i=2 ; i<x ; i++)
                {
                        if(x%i==0)
                               break;
                }
                if(i==x)
                {
                        printf("%d ",x);
                        n--;
                }
                x++;      
        }        
}

int main()
{
        int a;
        printf("enter terms : ");
        scanf("%d",&a);

        nprime(a);
        return 0;
}
