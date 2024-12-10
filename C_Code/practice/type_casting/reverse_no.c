#include<stdio.h>

void main()
{
  int max_no,y,no,count=0,length,a[45],remain=0;
  printf("enter the number:\n");
  scanf("%d",&no);
  if (no==0)
  {
      printf("you entered 0");
  }
  while(no!=0)
  {
      y=no%10;
      remain=remain*10+y;

      if(y%2!=0)
      {
          a[count]=y;
          count+=1;
      }

      if(y>max_no)
      {
          max_no=y;

      }
      no=no/10;
  }
printf("the odd numbers are : ");
  for(int i=0;i<count-1;i++)
  {
      printf(" %d,",a[i]);
  }
  printf(" %d\n",a[count-1]);
  printf("\nthe reverse of the number is %d : \n",remain);
  printf("the largest number is : %d\n",max_no);
  int ab=0;
  do
  {
      printf("%d, ",ab);
      ab+=1;
  }while(ab<45);
}
