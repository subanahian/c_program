#include<stdio.h>
int main()
{
int a,b,c,d;
float e,f,paid;
scanf("%d%d%f",&a,&b,&e);
scanf("%d%d%f",&c,&d,&f);
paid=e+(f*2);
printf("VALOR A PAGAR : R$ %2f",paid);
return 0;
}
