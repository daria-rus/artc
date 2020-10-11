#include <stdio.h>
//#include <stdlib.h>

int main(){

int mas[10]={0,5,7,8,10,0,0,1,3,1};
int i,j,buf, lenght;
lenght =sizeof(mas)/sizeof(int);
printf("%i\n",lenght);


for (i=0;i<lenght;i++)
{
	
  for (j=i;j<lenght;j++)
    {
    if (mas[i]< mas[j])
	{	
	buf=mas[j];
	mas[j]=mas[i];
	mas[i]=buf;
	}
    }
}

for(i=0;i<lenght;i++)
{printf("%d  ",mas[i]);}
printf("\n");

return 0;
} 
