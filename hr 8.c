#include <stdio.h>

int main() {
    int N, num, even_sum = 0, odd_sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            even_sum += num;
        } else {
            odd_sum += num;
        }
    }
    printf("%d %d\n", even_sum, odd_sum);
    return 0;
}
