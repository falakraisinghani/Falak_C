#include<stdio.h>

void main () {
float num1,inr,pnd ;
printf("What amount in dollars is to be converted ? \n");
scanf("%f",&num1);
inr=num1/48;
pnd=inr*70;
printf(" %f dollars in pounds is %f pounds \n",num1,pnd);
}
