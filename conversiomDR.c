#include<stdio.h>
void main(){
float num1,rs;
printf("amount to be converted into Rs.: ");
scanf("%f",&num1);
rs=num1*48;
printf("%.2f dollar in rupee is %.2f Rs.\n",num1,rs);


float num2,usd;
printf("amount to be converted into usd.: ");
scanf("%f",&num2);
usd=num2/48;
printf("%.2f dollar in rupee is %.2f usd",num2,usd);
}
