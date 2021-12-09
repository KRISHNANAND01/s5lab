#include<stdio.h>
#include<stdlib.h>
int main()
{
 int np,ps,i;
 int *sa;
 printf("\nEnter how many pages:");
 scanf("%d",&np);
 printf("\nEnter the page size:");
 scanf("%d",&ps);
 sa=(int *)malloc(2*np);
 for(i=0;i<np;i++)
 {
  sa[i]=(long)malloc(ps);
  printf("\nPage %d address %d\n",i+1,sa[i]);
 }
 } 
 
 
