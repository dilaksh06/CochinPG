#include <stdio.h>
#include <math.h>
void main()
{
  int no,count=0;
  printf("enter then number to be checked whether it is palindrome or nor\n");
  scanf("%d",&no);

  int no2,list[50];
  no2=no;
  int palindrome=0,remainder=0;

  while(no!=0)
  {
      remainder=no%10;
    for(int i=count;i<count+1;i++)
  {
      list[i]=remainder;
  }
      no=no/10;
      count++;
  }

printf("%d\n",count);
  for(int i=0;i<count;i++)

  {
      int mul=1;
      for(int y=0;y<count;y++)
  {
      //printf("%d\n",list[y]);
      mul=mul*(list[i]);
  }
  palindrome=palindrome+mul;
  }
printf("%d\n",palindrome);
if(palindrome==no2)
{
    printf("it is a palindrome number\n");
}else
{
    printf("it is not a palindrome number\n");
}
}
