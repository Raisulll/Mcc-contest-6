#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,count;
    scanf("%d",&n);
    for (int i = 2*n-2; i >=0; i-=2)
    {
        for (int j= 0; j<=2*n+i; j++)
        {
            count=0;
            if (j<2*n-i)
            {
                printf(" ");
            }
            else if(j>=2*n-i && j<=2*n && j%2==0)
            {
                printf("%d",count);
            }
        }
        
    }
    
    return 0;
}
