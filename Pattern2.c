#include<stdio.h>
// Created By Dev
// Star Pattern
  void main()
  {
    int a,b,c,d;


  for(c=5;c>=1;c--)
  {

    for(d=1;d<=10;d++)
    {
        if (d<=5)
        {
      if (c==d)
      {
        printf("+");
      }
      else
      {
        printf("  ");
      }
        }
        else
        {
             if (d+c==10)
      {
        printf(" +");
      }
      else
      {
        printf("  ");
      }
        }

    }


    printf("\n");
  }
  for(c=2;c<=5;c++)
  {
      for(d=1;d<=10;d++)
      {
          if (d<=5)
          {
        if (c==d)
        {
          printf("+");
        }
        else
        {
          printf("  ");
        }
      }
      else
      {
          if (c+d==10)
        {
          printf(" +");
        }
        else
        {
          printf("  ");
        }
      }

      }
      printf("\n");
  }
      }

