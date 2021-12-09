#include<stdio.h>
#include<stdlib.h>
int main()
{
 int rq[100],i,n,tothm=0,initial;
 printf("\nEnter the no of requests\n");
 scanf("%d",&n);
 printf("\nEnter the request sequence\n");
 for(i=0;i<n;i++)
 scanf("%d",&rq[i]);
 printf("\nEnter initail head position:");
 scanf("%d",&initial);
 for(i=0;i<n;i++)
 {
  tothm=tothm+abs(rq[i]-initial);
  initial=rq[i];
 }
  printf("\nTotal head moment is %d",tothm);
  return 0;
 } 
 
 
