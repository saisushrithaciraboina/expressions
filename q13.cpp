 #include<stdio.h>
 int sumOfDigits(int n)
 {
   if(n==0) return 0;
   else return (n%10)+sumOfDigits(n/10);
 }
 int main()
 {
     int number, sum;

     printf("Enter any number: ");
     scanf("%d",&number);

     sum = sumOfDigits(number);

     printf("Sum of digits =  %d\n",sum);

     return 0;
 }
