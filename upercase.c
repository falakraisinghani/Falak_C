#include<stdio.h>
void main () {
char s[5]="ABCD";
int i=0;
while (s[i]!= '\0'){
    if (s[i]>='a' && s[i]<='z'){
        s[i]=s[i]-32;
    }
    i++;
}
printf("%s",s);
}

