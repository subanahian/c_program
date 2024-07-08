#include<stdio.h>
int main()
{
    double A,B,C,avg;
    printf("Enter grade : \n");
    scanf("%lf%lf%lf",&A,&B,&C);
    avg=(A*2+B*3+C*5)/(2+3+5);
    printf(" MEDIA = %lf",avg);
    return 0;

}
