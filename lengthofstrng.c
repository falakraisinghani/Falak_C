#include<stdio.h>
void main () {
char name [10]="prarthana";
int count= 0 , i=0;
while (name[i] != '\0') {

    count++;
    i++;
}
printf("%d",i);
}
