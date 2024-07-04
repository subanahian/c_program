#include <stdio.h>
int main() {
    int i,positive=0;
    float n,sum=0.0;
    printf("Enter six number:\n");
    for(i=0;i<6;i++) {
        scanf("%f",&n);
        if (n>0) {
            positive++;
            sum+=n;
        }
    }
    printf("Count of positive numbers: %d\n",positive);
    if (positive>0) {
        double avg=sum/positive;
        printf("Average of positive numbers: %.1f\n",avg);
    } else {
        printf("No positive numbers entered");
    }
    return 0;
}
