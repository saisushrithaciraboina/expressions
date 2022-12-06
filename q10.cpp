#include <stdio.h>
#include<math.h>
int main()
{
int r,n,t,p;
float a;
printf("enter the values");
scanf("%d %d %d %d",&r,&n,&t,&p);
a=p(1+r/n)**n*t;
printf("the compound interest is %f",a);
return 0;
}

