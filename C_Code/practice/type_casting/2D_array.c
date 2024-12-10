#include<stdio.h>

void main()
{
  int x=7;
  for(int i=0;i<8;i++)
  {
      printf(" -> %d",i);
      if(i==5 && i==6)
      {
          break;
      }
  }
}
