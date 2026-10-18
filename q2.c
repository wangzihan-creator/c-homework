#include <stdio.h>
int main()
{
  unsigned char x;
  scanf("%hhu", &x);
  unsigned char high = x >> 4;
  unsigned char low = x & 0x0F;
  printf("%d %d\n", high, low);
  return 0;
}
