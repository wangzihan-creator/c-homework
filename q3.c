#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n % 2 == 1)
    {
        int mid = n / 2;
        for(int i = 0; i <= mid; i++)
        {
            for(int j=0;j<mid-i;j++)
                printf(" ");
            for(int j=0;j<2*i+1;j++)
                printf("*");
            printf("\n");
        }
        for(int i = mid-1; i >=0; i--)
        {
            for(int j=0;j<mid-i;j++)
                printf(" ");
            for(int j=0;j<2*i+1;j++)
                printf("*");
            printf("\n");
        }
    }
    else
    {
        int half = n / 2;
        for(int i = 0; i < half; i++)
        {
            for(int j=0;j<half-i-1;j++)
                printf(" ");
            for(int j=0;j<2*i+1;j++)
                printf("*");
            printf("\n");
        }
        for(int i = half -1; i >=0; i--)
        {
            for(int j=0;j<half-i-1;j++)
                printf(" ");
            for(int j=0;j<2*i+1;j++)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}
