
#include <stdio.h>

int main() {
    int a[3][3], i, j;
    int b[3] [3], k,l;



        printf("Enter elements of a matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n a Matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");



        printf("Enter elements of b matrix:\n");
    for (k = 0; k < 3; k++) {
        for (l = 0; l < 3; l++) {
            scanf("%d", &b[k][l]);
        }
    }

    printf("\n b Matrix is:\n");
    for (k = 0; k < 3; k++) {
        for (l = 0; l < 3; l++) {
            printf("%d ", b[k][l]);
        }
        printf("\n");


}
    }
}
