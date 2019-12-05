#include<stdio.h>

void main()
{

int a,b;

for(a=1;a<=20;a++)
{
    for(b=1;b<=20;b++)
    {
        if  (a==1||a==20||b==1||b==20)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
}
}
