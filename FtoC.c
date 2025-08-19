#include<stdio.h>

void main (){
float  cel,fah;
printf("temperature to convert in celsius : ");
scanf("%f",&fah);
cel=((fah - 32)*5)/9;
printf("%f fahrenheit is %f celsius \n",fah,cel);
}
