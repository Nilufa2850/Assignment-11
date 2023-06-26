// Write a function to print PASCAL Triangle. (TSRN)

#include<stdio.h>

int fact (int);
int comb(int,int);
void printpascal(int);

int fact(int n)
{
        int i , f=1 ;
        for(i=n ; i>=1 ; i--)
                f = f*i ;
        return f ;
}

int comb(int n,int r)
{
        int c;
        c=fact(n)/(fact(n-r)*fact(r));
        return c;
}

void printpascal(int line)
{
        int i,j,k,r;
        for(i=1 ; i<=line ; i++)
        {
                k=1;
                r=0;

                for(j=1 ; j<=2*line-1 ; j++)
                {
                        if(j>=line+1-i && j<=line-1+i && k)
                        {
                                printf("%2d",comb((i-1),r));
                                k=0;
                                r++;
                        }
                        else
                        {
                                printf("  ");
                                k=1;
                        }
                }
                printf("\n");
        }
}
int main()
{
        int a;
        printf("enter lines number : ");
        scanf("%d",&a);

        printpascal(a);
        return 0;
}
