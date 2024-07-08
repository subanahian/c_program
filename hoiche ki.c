#include<stdio.h>
int main ()
{
int X,Y;
scanf("%d%d",&X,&Y);
if(X<Y){
printf("%d",X+1);
}
else{
printf("%d",Y-1);
}
return 0;
}
