#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, count, a, row, col;
    scanf("%d", &n);
    for (int i = 0; i <= 4 * n; i += 2)
    {
        count = 0;
        row = i;
        if (row > 2 * n)
        {
            row = 4 * n - i;
        }
        for (int j = 0; j <= 2 * n + row; j++)
        {
            col = j;
            if (col < 2 * n - row)
            {
                printf("*");
            }
            else if (col >= 2 * n - row && col <= 2 * n && col % 2 == 0)
            {
                if(row==0)
                    printf("%d",count);
                else
                    printf("%d*", count);
                count++;
                a = count;
            }
            else if (col > 2 * n && col % 2 == 0)
            {
                if (a == count)
                    count--;
                count--;
                if (col == 2 * n + row)
                {
                    printf("%d", count);
                    break;
                }
                else
                {
                    printf("%d*", count);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
