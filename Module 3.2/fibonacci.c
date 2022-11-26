#include<stdio.h>    
int main()    
{    
 int n1=0,n2=1,n3,i,a;    
 printf("Enter number upto which the series should continue: ");    
 scanf("%d",&a);    
 printf("\n%d  %d  ",n1,n2);    
 for(i=2;i<a;i++)    
 {    
  n3=n1+n2;    
  printf("%d  ",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 }    