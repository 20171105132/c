#include<stdio.h>
struct  judge
{
    int judge1;
    int judge2;
    int judge3;
    int judge4;
    int judge5;
    int score;
};
int main()
{
    FILE *a;
    char numbers[10];
    char name[10];
    char sex[10];
    char dateofbirt[15];
    char class1[15];
    char phoneNo[15];
    struct judge p[100];
    int i=0,j;
    if ((a=fopen("/Users/s20171105132/Desktop/studentdata.csv","r"))==0)
    {
        printf("文件不存在\n");
    }
    else
    {
        while(!feof(a))
        {
            fscanf(a,"%s ,%s ,%s ,%s ,%s ,%s ,%d ,%d ,%d ,%d ,%d ",numbers,name,sex,dateofbirt,class1,phoneNo,&p[i].judge1,&p[i].judge2,&p[i].judge3,&p[i].judge4,&p[i].judge5);
            printf("%s,%s,%s,%s,%s,%s,%d,%d,%d,%d,%d",numbers,name,sex,dateofbirt,class1,phoneNo,p[i].judge1,p[i].judge2,p[i].judge3,p[i].judge4,p[i].judge5);
            i++;
        }
        j=i;
        for(i=0;i<j;i++)
        {
            printf("%s,%s,%s,%s,%s,%s,%d,%d,%d,%d,%d",numbers,name,sex,dateofbirt,class1,phoneNo,p[i].judge1,p[i].judge2,p[i].judge3,p[i].judge4,p[i].judge5);
        }
        fclose(a);
    }
}
