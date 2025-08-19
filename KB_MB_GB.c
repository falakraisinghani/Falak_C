#include<stdio.h>

void main (){
float by,kb,mb,gb;
printf("enter the  value of bytes : ");
scanf("%f",&by);
kb=1024*by;
mb=1024*kb;
gb=1024*mb;
printf("%f bytes is %fKB , %fMB and %fGB \n",by,kb,mb,gb);

}
