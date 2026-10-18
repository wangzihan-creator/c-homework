#include <stdio.h>

void Sort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i -1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
    }
    Sort(arr,10);
    for(int i=0;i<10;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
