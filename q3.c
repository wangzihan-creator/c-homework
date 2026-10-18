#include <stdio.h>

int main()
{
  char buf[201];
  fgets(buf,200,stdin);
  int letters=0,digits=0,spaces=0,others=0;
  int i=0;
  while(buf[i]!='\0')
  {
    if( (buf[i]>='A'&&buf[i]<='Z') || (buf[i]>='a'&&buf[i]<='z') )
      letters++;
    else if(buf[i]>='0' && buf[i]<='9')
      digits++;
    else if(buf[i] == ' ')
      spaces++;
    else
      others++;
    i++;
  }
  printf("letters=%d\n",letters);
  printf("digits=%d\n",digits);
  printf("spaces=%d\n",spaces);
  printf("others=%d\n",others);
  return 0;
}
