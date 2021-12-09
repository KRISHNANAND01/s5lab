#include<stdio.h>
#include<stdlib.h>
int main()
{
 int rq[100],i,n,tothm=0,initial,count=0;
 printf("\nEnter the no of requests\n");
 scanf("%d",&n);
 printf("\nEnter the request sequence\n");
 for(i=0;i<n;i++)
 scanf("%d",&rq[i]);
 printf("\nEnter initail head position:");
 scanf("%d",&initial);
while(count!=n)
{
 int min=1000,d,index;
 for(i=0;i<n;i++)
 {
  d=abs(rq[i]-initial);
  if(min>d)
  {
   min=d;
   index=i;
  }
 }
  tothm=tothm+min;
  initial=rq[index];
  rq[index]=1000;
  count++;
 }
  printf("Total seek time is %d",tothm);
  return 0;
 }   
