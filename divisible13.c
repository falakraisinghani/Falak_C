#include <stdio.h>

void main(){

    int i,s;


    for (int i=1 ; i<=100; i++){

        if (i%13==0){
            s+=i;
        }

    }

    printf("%d", s);
}
