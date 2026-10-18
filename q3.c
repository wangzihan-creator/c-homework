#include <stdio.h>

int MyStrLen(char s[])
{
    int len = 0;
    while(s[len] != '\0')
    {
        len++;
    }
    return len;
}

void MyStrRev(char s[])
{
    int l = MyStrLen(s);
    for(int i=0; i < l/2; i++)
    {
        char temp = s[i];
        s[i] = s[l - 1 - i];
        s[l -1 -i] = temp;
    }
}

int main()
{
    char str[101];
    scanf("%s", str);
    int length = MyStrLen(str);
    MyStrRev(str);
    printf("Len = %d\n", length);
    printf("Rev = %s\n", str);
    return 0;
}
