#include<stdio.h>
void main () {
int amount;
printf("Enter the value= ");
scanf("%d",&amount);

printf("\nMinimum number of notes required:\n");

for (; amount > 0; ) {
        if (amount >= 500) {
            printf("%d note(s) of Rs.500\n", amount / 500);
            amount %= 500;
        }
        else if (amount >= 200) {
            printf("%d note(s) of Rs.200\n", amount / 200);
            amount %= 200;
        }
        else if (amount >= 100) {
            printf("%d note(s) of Rs.100\n", amount / 100);
            amount %= 100;
        }
        else if (amount >= 50) {
            printf("%d note(s) of Rs.50\n", amount / 50);
            amount %= 50;
        }
        else if (amount >= 20) {
            printf("%d note(s) of Rs.20\n", amount / 20);
            amount %= 20;
        }
        else if (amount >= 10) {
            printf("%d note(s) of Rs.10\n", amount / 10);
            amount %= 10;
        }
        else if (amount >= 5) {
            printf("%d note(s) of Rs.5\n", amount / 5);
            amount %= 5;
        }
        else if (amount >= 2) {
            printf("%d note(s) of Rs.2\n", amount / 2);
            amount %= 2;
        }
        else {
            printf("%d note(s) of Rs.1\n", amount);
            amount = 0;
        }
    }

}
