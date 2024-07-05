#include<stdio.h>
int main()
{
float a,b,avg;
printf("Enter grade :\n");
scanf("%f%f",&a,&b);
avg=(a*3.5 + b*7.5)/7.5+3.5;
printf("MEDIA = %f",avg);
return 0;
}
