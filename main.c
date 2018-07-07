#include<stdio.h>
struct student
{
    char numbers[10];
    char name[10];
    char sex[10];
    char dateofbirt[15];
    char class1[15];
    char phoneNo[15];
    int judge1;
    int judge2;
    int judge3;
    int judge4;
    int judge5;
    int score;
    struct student *next;
};
int main()
{
    FILE *a;
    FILE *b;
    char numbers[10];
    char name[10];
    char sex[10];
    char dateofbirt[15];
    char class1[15];
    char phoneNo[15];
    int  t=0,n,i;
    scanf("%d",n);
    struct student *head,*h,p[n];
    head=&p[t];
    p[t].next=&p[t+1];
    h=head;
    if ((a=fopen("/Users/s20171105132/Desktop/studentdata.csv","r"))==0)
    {
        printf("文件不存在\n");
    }
    else
    {
        fscanf(a,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ",&p[i].numbers,&p[i].name,&p[i].sex,&p[i].dateofbirt,&p[i].class1,&p[i].phoneNo,&p[i].judge1,&p[i].judge2,&p[i].judge3,&p[i].judge4,&p[i].judge5);
        printf("%s,%s,%s,%s,%s,%s,%d,%d,%d,%d,%d",p[i].numbers,p[i].name,p[i].sex,p[i].dateofbirt,p[i].class1,p[i].phoneNo,p[i].judge1,p[i].judge2,p[i].judge3,p[i].judge4,p[i].judge5);
        for(i=0;i<n;i++)
        {
             while(h!=0)
           {
            printf("%s,%s,%s,%s,%s,%s,%d,%d,%d,%d,%d",p[i].numbers,p[i].name,p[i].sex,p[i].dateofbirt,p[i].class1,p[i].phoneNo,p[i].judge1,p[i].judge2,p[i].judge3,p[i].judge4,p[i].judge5);
            h=h->next;
               break;
           }
        }
    }
    int max[50],min[50];
    for(i=0;i<n;i++)
    {
         max[i]=min[i]=p[i].judge1;
    }
    for(i=0;i<n;i++)
    {
    if(p[i].judge2>max[i])
      max[i]=p[i].judge2;
    if(p[i].judge3>max[i])
      max[i]=p[i].judge3;
    if(p[i].judge4>max[i])
      max[i]=p[i].judge4;
    if(p[i].judge5>max[i])
      max[i]=p[i].judge5;
    }
    for(i=0;i<n;i++)
   {
    if(p[i].judge2<min[i])
      min[i]=p[i].judge2;
    if(p[i].judge3<min[i])
      min[i]=p[i].judge3;
    if(p[i].judge4<min[i])
      min[i]=p[i].judge4;
    if(p[i].judge5<min[i])
      min[i]=p[i].judge5;
    }
    for(i=0;i<n;i++)
    {
    p[i].score=(p[i].judge1+p[i].judge2+p[i].judge3+p[i].judge4+p[i].judge5-max[i]-min[i])/3;
    }
    b=fopen("/Users/S20171105132/Desktop/studentdate2.csv","s");
    fprintf(b,"numbers,name,sex,dateofbirth,class,phoneNo,judge1,judge2,judge3,judge4,judge5,score\n");
    while(i<n)
    {
    fprintf(b,"%s,%s,%s,%s,%s,%s,%d,%d,%d,%d,%d,%d",p[i].numbers,p[i].name,p[i].sex,p[i].dateofbirt,p[i].class1,p[i].phoneNo,p[i].judge1,p[i].judge2,p[i].judge3,p[i].judge4,p[i].judge5,p[i].score);
       i++;
    }
   return 0;
}
