#include<stdio.h>

void main()
{

int a,b,c,d;
a=0;
b=1;
c=a+b;
printf("%d,%d,%d,",a,b,c);

for (d=0;d<=20;d++)
{
    a=b;
    b=c;
    c=a+b;
printf("%d,",c);
}


}
