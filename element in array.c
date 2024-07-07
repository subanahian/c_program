#include <stdio.h>
int main()
{
int ar[] = {1, 2, 3, 4, 5};
int num=sizeof(ar)/sizeof(ar[0]);

printf("The num of element in the array : %d\n", num);

return 0;
}
