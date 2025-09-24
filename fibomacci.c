#include<stdio.h>
void main () {
int a=1,b=1,c,n,i;
printf("Enter the value of n: \n");
scanf("%d",&n);
printf("%d,%d,",a,b);
for (i=2;i<=n;i++){
    c=a+b;
    a=b;
    b=c;

    printf("%d,",c);
}
}
