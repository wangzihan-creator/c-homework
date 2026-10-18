#include <stdio.h>
int main()
{
  int N;
  scanf("%d", &N);
  int count = 0;
  int sum = 0;
  for(int i = 1; i <= N; i++)
  {
    if(i % 3 == 0 && i % 5 != 0)
    {
      count++;
      sum += i;
    }
  }
  printf("Count = %d\n", count);
  printf("Sum = %d\n", sum);
  return 0;
}
