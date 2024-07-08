#include <stdio.h>

int main() {
    int N;
    printf("Enter the amount of money your mother will give you (in Taka): ");
    scanf("%d", &N);
    if (N >1000) {
        printf("I will buy Punjabi\n");
        N -=1000;
        if (N >=500) {
            printf("I will buy new shoes\n");
            N -=500;
            printf("Alisa will buy new shoes\n");
        } else {
            printf("Bad luck!\n");
        }
    } else {
        printf("Bad luck!\n");
    }
    return 0;
}
