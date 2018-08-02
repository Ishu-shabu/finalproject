#include<stdio.h>
void main()
{ 
 int a,b,s;
 printf("Enter two numbers");
 scanf("%d%d",&a,&b);
 s=sum(a,b);
 printf("The sum of%d and%d is %d",a,b,s);
}
