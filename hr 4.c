#include <stdio.h>
int main() {
    int N;
    printf("Enter a non-negative integer N: ");
    scanf("%d",&N);
    printf("Numbers from 1 to %d divisible by both 3 and 7:\n", N);
    for (int i=1;i<=N;i++) {
        if (i%3==0&&i%7==0) {
            printf("%d\n",i);
        }
    }
    return 0;
}
