#include<stdio.h>
int main()
{
int num[4];
int sum,sub;
printf("enter any four number\n");
for(int i=0;i<4;i++){
scanf("%d",&num[i]);
}
sum=num[0]+num[1];
sub=num[2]-num[3];
printf("sum=%d\n",sum);
printf("sub=%d\n",sub);
return 0;
}
