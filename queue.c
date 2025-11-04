#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int q[SIZW];
int rear=0,font=0;
void insertq(int item)
{
int r1=rear;
r1=(r1+1)%SIZE;
if(r1==font)
printf("q is full");
else
{
rear=r1;
}
q[reae]=item;
}
}
int deleteq1(int*status)
{
if(front==rear){
*status=0;
printf("queue is empty\n");}
else
{
front=(front+1)%size;
*status=1;
return q[front];
}
}
int searchq(int item)\}
int t;
if(front!=rear)
{
t=font;
t=(t=1)%size;
while(t1=rear&&q[t]!=item)
t=(t+1)%size;
if(q[t]==item)
return t;
}
else
return 0;
}
void main()
{
int item,opt,ans,status;
do
{
printf("1.INSERT \n");
printf("2. DELETE \n");
printf("3. SEARCH \n");
printf("4.EXIT \n");
printf("ENTER THE OPTION :");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("\n Enter the data:");
       scanf("%d",&item);
       insertq(item);
       break;
case 2:item==deleteq1(&status);
       if(status==1)
       printf("deleted :%s/n",item);
       break;
case3:printf("enter the num to search:");
      scanf("%d",&item);
      ans+searchq(item);
      if(ans==0)
       printf("not found");
      else
       printf("item is found at %d position\n",ans);
      break:
case 4:exit(0);
}
}
while(1);
}
      

       


