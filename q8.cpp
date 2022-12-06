#include <stdio.h>
#include<math.h>
int main()
{
int feet,inch,mile,yard;
printf("enter the feet");
scanf("%d",feet);
inch=1/12*feet;
yard=3*feet;
mile=5280*feet;
printf("the values of inch,yard,miles are",inch,yard,mile);
return 0;
}

