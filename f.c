#include<stdio.h>
int main()
{
    int n,c,i,j,k;
    scanf("%d",&n);
    c=1;
    for ( i = 0; i <=2*n-2; i+=2)
    {
        for(j=0; j<i; j++)
        {
            printf(" ");
        }
        for(j=0; j<2*n-i; j++)
        {
            if(j%2==1)
            {
                printf("*");
            }
            else
            {
                printf("%d",c);
                c++;
            }
        }
        k=n*n+1;
        for(j=2*n-i-1; j>0;j--)
        {
            if(j==2*n-i-1 && i!=0)
            {
                k=n*n-i;
            }
            if(j%2==0)
            {
                printf("*");
            }
            else
            {
                printf("%d",k);
                k++;
            }
            
        }
        printf("\n");
    }
    return 0;
}
    
   

