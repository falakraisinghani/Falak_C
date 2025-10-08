#include <stdio.h>
void main() {
    int a[3][3], b[3][3], p[3][3];
    int i,j,k;

    printf("Enter first 3x3 matrix: \n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    printf("Enter second 3x3 matrix: \n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<3;i++)
        for(j=0;j<3;j++) {
            p[i][j]=0;
            for(k=0;k<3;k++)
                p[i][j]+=a[i][k]*b[k][j];
        }

    printf("product of the  Matrix: \n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++)
            printf("%d ",p[i][j]);
        printf("\n");
    }

}
