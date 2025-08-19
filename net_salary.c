#include<stdio.h>
void main () {
float n,g,d;
printf("enter the gross salary : ");
scanf("%f",&g);
printf("enter the total deductions : ");
scanf("%f",&d);
n=g-d;
printf(" the net salary is %.2f \n",n);
}

