#include <stdio.h>

int main() {
    int a[5], i, j, temp;

    printf("Enter the array elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }



    printf("\nSorted Array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }

}

