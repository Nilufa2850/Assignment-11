/*Write a function to calculate HCF of two numbers. (TSRS)*/

#include<stdio.h>

int HCF (int ,int);

int main()
{
        int x , y;
        printf("Enter two values : ");
        scanf("%d%d",&x,&y);
        printf("HCF is %d ", HCF(x,y));
        return 0;
}

int HCF (int a, int b)
{
        int H ;

        for(H = a<b?a:b ; H>=1 ; H--)
        {
                if(a%H==0 && b%H==0)
                        break ;
        }
        return H ;
}

