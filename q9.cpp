#include <stdio.h>
#include<math.h>
int main()
{
float d,a,vi,vf;
printf("the height of the object is");
scanf("%f %f %f",&d,&a,&vi);
vf=sqrt(vi*vi+2*9.8*d);
printf("the final speed is %f",vf);
return 0;
}

