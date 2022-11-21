#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,a;
    scanf("%d",&n);
    for ( int i = 1; i <=2*n-1; i++)
    {
        for (int j = 1; j <= 2*n-1; j++)
        {
            a=i+j;
            if(i==j || a ==2*n)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    
    
    return 0;
}
