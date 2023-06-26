// Write a function to print all Prime numbers between two given numbers. (TSRN)

#include<stdio.h>

int prime(int,int);

int prime(int a , int b)
{
        int i ,x ;

        for(x=a+1 ; x<=b-1 ; x++)
        {
                for(i=2 ; i<x ; i++)
                {
                        if(x%i==0)
                               break;
                }
                if(i==x)
                        printf("%d ",x);   
        }        
}

int main()
{
        int a ,b ;
        printf("enter two number : ");
        scanf("%d%d",&a,&b);

        prime(a,b);
        return 0;
}
