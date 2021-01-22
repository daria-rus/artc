#include <stdio.h>
#include <stdlib.h>


void bubbleSort(int array[],int);
void printArray(int array[],int);

int main()
{   
    int lenght;
	int *array;
    printf("Please set array length...\n");
    scanf("%d",&lenght);
	array=(int *)malloc(sizeof(int)*lenght);
    printf("Please set array elements...\n");
    for (int i=0;i<lenght;i++)
    {
        scanf("%d",&array[i]);    
    }
    
    //Sort function
    bubbleSort(array,lenght);
   
    //Print sorted array
    printf("Here's your sorted array:\n");
    printArray(array,lenght);
    free(array);
    return 0;
} 

void bubbleSort(int array[],int lenght)
{
    int i,j,buf;
    printf("%i\n",lenght);

    for (i=0;i<lenght;i++)
    {	
        for (j=i;j<lenght;j++)
        {
            if (array[i]< array[j])
            {	
                buf=array[j];
                array[j]=array[i];
                array[i]=buf;
            }
        }
    }
}

void printArray(int array[],int lenght)
{   
    for(int i=0;i<lenght;i++)
    {
        printf("%d  ",array[i]);
    }
    printf("\n");

}
