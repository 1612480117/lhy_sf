#include <stdio.h>
#include <stdlib.h>
int sum=0;
   void output(int n,int a[]) //�������
   {
       int i;
     for(i=n;i>=0;i--)
     {
        printf("%d------",a[i]);//����������һ����ʼ�����
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
           //printf("����");
           return;
       }
       if(num == 0)  //���һǹ
       {
           a[0] = score;
           output(num1,a);
          // printf("ksjdfhsdfhksdhfk");
           return;
       }
       //����������һǹ
       for(i=0;i<=10;i++)  //��һǹ������0��10��
       {
           a[num]=i;//�ѵ�һǹ�ĳɼ�¼��
           allput(score-i,num-1,a,num1);//ʣ�µ�ǹ���ͻ���
       }
   }

   int main()
   {

   int m,n;//ǹ��Ϊn,����Ϊm
   int i;
   printf("������һ�������ǹ��\n");
   scanf("%d",&n);
   printf("������һ�����˶��ٻ���\n");
   scanf("%d",&m);
   int a[n];//nǹ��n������ռ䣬ÿ���ռ��һ������
   allput(m,n-1,a,n-1);
   printf("����%d�ַ���\n",sum);
   }


