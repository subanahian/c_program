#include<stdio.h>
int main()
{
int a,b;
float c,x;
printf("Enter Employee number :\n");
scanf("%d",&a);
printf("Enter working hour :\n");
scanf("%d",&b);
printf("Enter per day salary :\n");
scanf("%f",&c);
x=b*c;
printf("NUMBER = %d \n",a);
printf("SALARY = U$%f",x);
return 0;
}
