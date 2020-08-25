#include <stdio.h>
int main()
{
int num1,num2;
printf("\nNote: First number should be bigger than the second number to make the application work properly.");
printf("\nEnter first number:");
scanf("%d",&num1);
printf("Enter second number:");
scanf("%d",&num2);
printf("\nSum of %d and %d is %d",num1,num2,num1+num2);
printf("\nDifference of %d and %d is %d",num1,num2,num1-num2);
printf("\nProduct of %d and %d is %d",num1,num2,num1*num2);
printf("\nQuotient of %d and %d is %d",num1,num2,num1/num2);
printf("\nRemainder of %d and %d is %d",num1,num2,num1%num2);
return 0;
}
