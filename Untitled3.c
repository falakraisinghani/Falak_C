#include<stdio.h>

void main () {
int a,b,c;
printf("Enter three numbers : \n");
scanf("%d %d %d",&a,&b,&c);

if (a>b) {
        if (a>c)
            {
                if(b>c) {
                  printf("%d is the largest \n",a);
                  printf("%d is the smallest \n",c);
                  }

               else {
                printf("%d is the largest \n",a);
                 printf("%d is the smallest \n",b);
               }
                }
        else {
                if (a>b){
             printf("%d is the largest \n ",c);
              printf("%d is the smallest \n",b);
                }
                else {
                     printf("%d is the largest \n",c);
                      printf("%d is the smallest \n",a);
                }
             }

       }

else {
    if(b>c){
        if(a>c) {
            printf("%d is the largest \n",b);
            printf("%d is the smallest \n",c);
             }
        else {
            printf("%d is the largest \n",b);
            printf("%d is the smallest \n",a);
             }
           }
    }
}
