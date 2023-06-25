/*Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
function.*/

#include<stdio.h>

int fact (int n);
int series (int m);

int main()
{
        int x ;
        printf("Enter terms : ");
        scanf("%d",&x);

        printf("sum of that series is %d",series(x));
        return 0;

}

int fact(int n)
{
        int i , f=1 ;

        for(i=1 ; i<=n ; i++)
                f = f * i ;

        return f ;
}

int series (int m )
{
        int i , s = 0 ;

        for(i=1 ; i<=m ; i++)
                s = s + ( fact(i) / i ) ;

        return s ;
        
}

