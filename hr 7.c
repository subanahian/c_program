#include <stdio.h>

int main() {
    int N;
    printf("Enter an integer N: ");
    scanf("%d", &N);
    if (N <= 0) {
        for (int i = N; i <= 1; i++) {
            printf("%d ", i);
        }
    } else {
        for (int i = 1; i <= N; i++) {
            printf("%d ", i);
        }
    }
    return 0;
}
