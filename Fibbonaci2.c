#include<stdio.h>

void main()
{

int a,b,c,d,e;
a=0;
b=1;
c=a+b;
printf("%d,%d,%d,",a,b,c);
void black();

 black(a,b,c);

}


void black (a,b,c)
{
    int d;
  for (d=0;d<=20;d++)
  {
      a=b;
      b=c;
      c=a+b;
  printf("%d,",c);
  }
}
