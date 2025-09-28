#include<stdio.h>
void main(){
int a,i,s;
printf("Enter a number: \n");
scanf("%d",&a);
while(a>0){
    i=a%10;
    a=a/10;
printf("%d\n",i);
    s +=i ;

}
printf("sum: %d\n",s);

}

