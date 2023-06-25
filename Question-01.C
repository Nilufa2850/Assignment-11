/*Write a function to calculate LCM of two numbers. (TSRS)*/

#include<stdio.h>

int LCM (int ,int);

int main()
{
        int x , y;
        printf("Enter two values : ");
        scanf("%d%d",&x,&y);
        printf("LCM is %d ", LCM(x,y));
        return 0;
}

int LCM (int a, int b)
{
        int L ;

        for(L = a>b?a:b ; L<=a*b ; L = L+(a>b?a:b))
        {
                if(L%a==0 && L%b==0)
                        break ;
        }
        return L ;
}

