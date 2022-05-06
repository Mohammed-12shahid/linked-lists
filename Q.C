#include<stdio.h>
#include<conio.h>
#define SIZE 5
int q[SIZE],f,r,item,count;

void enqueue()
{
 if(count==SIZE)
{
 printf("\nqueue overflow");
 return;
}
else
{
 r=(r+1)%SIZE;
 q[r]=item;
 count=count+1;
}
}
void dequeue()
{
int del;
if(count==0)
{
 printf("\nqueue underflow");
 return;
}
else
{
 del=q[f];
 printf("\ndeleted item=%d",del);
 f=(f+1)%SIZE;
 count=count-1;
}
}
void display()
{
 int i,j;
 if(count==0)
{
 printf("queue underflow\n");
 return;
}
i=f;
for(j=1;j<=count;j++)
{
 printf("QUEUE[%d]=%d\n",i,q[i]);
i=(i+1)%SIZE;
}
}
void main()
{
 int choice;
 int count=0;
 clrscr();
 f=0;
 r=-1;
 for(;;)
{
 printf("\n1:ENQUEUE\n2:DEQUEUE\n3:DISPLAY\n4:EXIT\n");
 printf("\nenter your choice: ");
scanf("%d",&choice);
switch(choice)
{
 case 1:printf("\nenter the item to be insserted: ");
        scanf("%d",&item);
        enqueue();
        break;
 case 2:dequeue();
        break;
 case 3:display();
        break;
 case 4:exit(0);
  }
}
}