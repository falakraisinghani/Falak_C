#include<stdio.h>
void main () {
float ar,p,l,b;
printf("enter the length of the side of rectangle : ");
scanf("%f",&l);
printf("enter the breadth of the side of rectangle : ");
scanf("%f",&b);
p=2*(l+b);
ar=l*b;
printf(" the area and perimeter would be %.2f and %.2f , respectively \n",ar,p);
}
