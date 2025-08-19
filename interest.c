#include<stdio.h>

void main() {
float in,p,r,n;
printf("enter the principle ammount : ");
scanf("%f",&p );
printf("enter the rate : ");
scanf("%f",&r);
printf("enter the number of time period: ");
scanf("%f",&n );
in=(p*r*n)/100;
printf("the interest would be %f \n",in);
}
