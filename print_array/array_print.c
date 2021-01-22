#include <stdio.h>

int main()
{
char *c="dfdfdf";
int i=0;
while (*c)
{
printf("%c ,", *c);
c+=1;

}
printf("\n");
int array[]={5,7,8,97,77,7,56};
int n =sizeof(array)/sizeof(int) -1;
int *p = array;
while (n>=0)
{
printf("%d, ",*p);
p+=1;
n--;
}


return 0;

}
