#include <stdio.h>

int main()
{
int array[]={5,7,8,97,77,7,56};
int n =sizeof(array)/sizeof(int) -1;

while (n>=0)
{
printf("%d, ",array[n]);
n--;
}


return 0;

}
