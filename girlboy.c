#include <stdio.h>

int main() {
    int i, boys = 0, girls = 0;
    char sex;

    printf("Enter sex code for 50 students (M/F):\n");

    for (i = 1; i <= 50; i++) {
        scanf(" %c", &sex);

        if (sex == 'M' )
            boys++;
        else if (sex == 'F' )
            girls++;
    }

    printf("Boys  = %d\n", boys);
    printf("Girls = %d\n", girls);


}

