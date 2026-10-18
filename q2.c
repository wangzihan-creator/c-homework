#include <stdio.h>

int main()
{
    int sec_all;
    scanf("%d", &sec_all);

    int h = sec_all / 3600;
    int rem = sec_all % 3600;
    int m = rem / 60;
    int s = rem % 60;

    printf("%d h %d min %d s\n", h, m, s);
    return 0;
}
