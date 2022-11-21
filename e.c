#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,m,a,min,max;
    scanf("%d%d",&n,&m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            scanf("%d",&a);
            if(j==0) min=a;
            if(min>a) min=a;
        }
        if(i==0) max=min;
        if(max<min) max=min;
        printf("\n");
    }
    printf("%d\n",max);
    return 0;
}
