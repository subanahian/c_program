 #include <stdio.h>

int main() {
    double A,B,avg;
    printf("Enter height:");
    scanf("%lf%lf", &A,&B);
    avg= (A+B)/2;
    printf("MEDIA = %.1lf\n",avg);
    return 0;
}
