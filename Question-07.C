/*Write a function to print first N terms of Fibonacci series (TSRN)*/

#include<stdio.h>

void fibo (int);

int main ()
{
        int x ; 
        printf("Enter terms : ");
        scanf("%d",&x);

        fibo(x);
        return 0;
}

void fibo(int n)
{
        int a = -1 ,b = 1 ,c ;

        for(int i=1 ; i<=n ; i++)
        {
                c = a + b ;
                printf("%d ",c);
                a = b ;
                b = c ;
        }

}
