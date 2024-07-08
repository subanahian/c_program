#include <stdio.h>
int main() {
    long long int A, B, multiplication;
    printf("Enter two integers A and B: ");
    scanf("%lld %lld", &A, &B);
    multiplication = A * B;
    printf("Multiplication of %lld and %lld is: %lld\n", A, B, multiplication);
    return 0;
}
