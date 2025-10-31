#include <stdio.h>

int main() {
    int a[5], i, j, temp;

    printf("Enter the array elements:\n");
    for (i = 5; i >= 1; i--) {
        scanf("%d", &a[i]);
    }



    printf("\n Reverse Array:\n");
    for (i = 1; i <=5; i++) {
        printf("%d\n", a[i]);
    }

}

