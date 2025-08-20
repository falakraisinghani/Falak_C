#include<stdio.h>

void main() {
int a,b;
printf("Enter any two numbers : \n");
scanf("%d %d",&a,&b);
if(a>b){
    printf("%d is the largest \n",a);
    printf("%d is the smallest \n",b);
}
else
    printf("%d is the largest \n",b);
    printf("%d is the smallest \n",a);

}

