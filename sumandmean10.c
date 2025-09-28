#include <stdio.h>

void main(){

    float n;
    float s=0;

    for (int i=1; i<=10; i++){
        printf("Enter number %d : ", i);
        scanf("%f", &n);
        s+=n;
    }

    float m=s/10;
    printf("Sum is %.1f and mean is %.1f", s, m);
}
