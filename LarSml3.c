#include<stdio.h>
void main () {
 int a,b,c;

 printf("Enater three numbers :  ");
 scanf("%d %d %d", &a,&b,&c);

 if (a >=b && a>=c )
    printf("largest = %d \n", a);
 else if (b>=a && b>= c)
    printf("largest = %d \n",b);
 else
    printf("largest = %d \n",c);

 if ( a <= b && a<= c)
    printf("smallest = %d \n",a);
 else if (b <= a && b<=c )
    printf("smallest = %d \n",b);
 else
    printf("smallest = %d \n",c);
}
