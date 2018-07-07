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
    FILE *b;
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
    j=i;
    int max[100],min[100];
    for(i=0;i<j;i++)
    {
        max[i]=min[i]=p[i].judge1;
    }
    j=i;
    
    for(i=0;i<j;i++)
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
    j=i;
    
    for(i=0;i<j;i++)
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
    j=i;
    
    for(i=0;i<j;i++)
    {
        p[i].score=(p[i].judge1+p[i].judge2+p[i].judge3+p[i].judge4+p[i].judge5-max[i]-min[i])/3;
    }
    j=i;
    i=0;
    b=fopen("/Users/S20171105132/Desktop/studentdate2.csv","s");
    
    while(i<j)
    {
        fprintf(b,"%s,%s,%s,%s,%s,%s,%d,%d,%d,%d,%d,%d",numbers,name,sex,dateofbirt,class1,phoneNo,p[i].judge1,p[i].judge2,p[i].judge3,p[i].judge4,p[i].judge5,p[i].score);
        i++;
    }
    fclose(b);
    
    return 0;
}


