#include <stdio.h>
#include<math.h>
int main() {
    int s1,s2,s3;
    float s,x,area;
    printf("enter the lengths");
    scanf("%d %d %d ",&s1,&s2,&s3);
    s=(s1+s2+s3)/2;
    x=(s*(s-1)*(s-2)*(s-3));
    area=sqrt(x);
    printf("area of the triangle is %f",area);

    return 0;
}
