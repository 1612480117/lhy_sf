#include <stdio.h>
#include <stdlib.h>
int sum=0;
   void output(int n,int a[]) //输出函数
   {
       int i;
     for(i=n;i>=0;i--)
     {
        printf("%d------",a[i]);//从数组的最后一个开始输出来
     }
     printf("\n%%%%%%%%%%%%\n");
     sum++;
   }

      void allput(int score,int num,int a[],int num1)
   {
       int i;
       if(score<0||score>(num+1)*10)
       {
         //  printf("sjdkfhsf");
           //printf("错误");
           return;
       }
       if(num == 0)  //最后一枪
       {
           a[0] = score;
           output(num1,a);
          // printf("ksjdfhsdfhksdhfk");
           return;
       }
       //如果不是最后一枪
       for(i=0;i<=10;i++)  //第一枪可能是0到10环
       {
           a[num]=i;//把第一枪的成绩录入
           allput(score-i,num-1,a,num1);//剩下的枪数和环数
       }
   }

   int main()
   {

   int m,n;//枪数为n,环数为m
   int i;
   printf("请输入一共打多少枪：\n");
   scanf("%d",&n);
   printf("请输入一共打了多少环：\n");
   scanf("%d",&m);
   int a[n];//n枪开n个数组空间，每个空间存一个分数
   allput(m,n-1,a,n-1);
   printf("共有%d种方法\n",sum);
   }


