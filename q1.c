#include <stdio.h>

int Max(int a[], int n)
{
    int res = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] > res)
            res = a[i];
    }
    return res;
}

int Min(int a[], int n)
{
    int res = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] < res)
            res = a[i];
    }
    return res;
}

int Average(int a[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum / n;
}

int main()
{
    int arr[10];
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("max=%d\n", Max(arr,10));
    printf("min=%d\n", Min(arr,10));
    printf("avg=%d\n", Average(arr,10));
    return 0;
}
