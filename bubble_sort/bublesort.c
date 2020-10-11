#include <stdio.h>


void bubbleSort(int array[],int);
void printArray(int array[],int);

int main()
{   
    int array1[]={88,12,0,0,1};
    int lenght1 = (sizeof(array1)/sizeof(int));
   
    bubbleSort(array1,lenght1);
    

    int array2[]={88,92,0,0,1,7,5,78};
    int lenght2 = (sizeof(array2)/sizeof(int));
    
    bubbleSort(array2,lenght2);


    //Print sorted array
    printArray(array1,lenght1);
    printArray(array2,lenght2);

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
