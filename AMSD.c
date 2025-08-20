#include<stdio.h>
int main() {
int num1,num2,sum,sub,prod,div ;
printf("Enter two numbers \n ");
scanf("%d %d",&num1, &num2);
sum=num1+num2;
sub=num1-num2;
prod=num1*num2;
div=num1/num2;
printf("Addition of %d and %d= %d\n", num1,num2,sum);
printf("Multiplication  of %d and %d= %d\n", num1,num2,prod);
printf("Subtraction  of %d and %d= %d\n", num1,num2,sub);
printf("Division of %d and %d= %d\n", num1,num2,div);
}

