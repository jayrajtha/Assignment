#include<stdio.h>  
int main()    
{    
 int b=1;
 int a;    
 printf("Enter a number to find the factorial of: ");    
  scanf("%d",&a);    
  for(int i=1;i<=a;i++)
  {    
      b=b*i;    
  }    
  printf("Factorial of %d is: %d",a,b);    
return 0;  
}   