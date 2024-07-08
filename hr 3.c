#include <stdio.h>
int main() {
    long long int N;
    printf("Enter a non-negative integer N:");
    scanf("%lld",&N);
    if (N%3==0){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
