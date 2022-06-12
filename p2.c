#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int question()
{
 int num1,num2,num3,con,t,i=11;

 num1 = rand()%100+1;
 num2 = rand()%100+1;
 num3 = rand()%100+1;
 t = rand()%4+1;
 if(t==1)
 {
  printf("%d + %d = ",num1,num2);
  con=num1+num2;
 }
 if(t==2)
 {    if(num1>=num2)
      {
         printf("%d - %d = ",num1,num2);
         con=num1-num2;
       }
       else
       {
         printf("%d - %d = ",num2,num1);
         con=num2-num1;
       }
}
 if(t==3)
 {
  printf("%d x %d = ",num1,num2);
  con=num1*num2;
 }
 if(t==4)
 {
  while(i*num3>100)
  {
   i = rand()%9+1;
  }
  printf("%d ÷ %d = ",i*num3,num3);
  con=i;
 }
 printf("%d\n",con);
}
int main()
{
 int i,n;
 printf("请输入四则运算题目的数量:\n");
 scanf("%d",&n);
 srand(time(0));
 for(i=0;i<n;i++)
 {
  question();
 }

 return 0;
}
