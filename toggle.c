#include<stdio.h>
void main () {
char a[50];
printf("Enter a word: \n");
scanf("%s",&a);
//char s[5]="&a";
int i=0;
while (a[i]!= '\0'){
    if (a[i]>='a' && a[i]<='z'){
        a[i]=a[i]-32;
    }
    else if (a[i]>='A' && a[i]<='Z'){
        a[i]=a[i]+32;
    }
    i++;
}
printf("%s",a);
}
