#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,count=0,a,b;
    scanf("%d",&n);
    for (int i = -n; i <=n; i++)
    {
        for (int j = -n; j <=n; j++)
        {
            if(i*i+j*j<=n*n)
            {
                count++;
            }
        }
        
    }
    printf("%d",count);
    return 0;
}
