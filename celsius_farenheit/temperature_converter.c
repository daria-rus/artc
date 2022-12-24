# include <stdio.h>

#define LOWER 0  // lower limit tempertature
#define UPPER 300 //upper limit
#define STEP 20 // step size

int main (){

//Increase celsius
float c = 5.0/9.0;
 for (int farh=LOWER; farh<=UPPER; farh+=STEP)
    printf("%3d %6.1f\n", farh, c*(farh-32));

printf("\nDecreasing celsius:\n");

//Decrease celsius
 for (int farh=UPPER; farh >= LOWER; farh-=STEP)
    printf("%3d %6.1f\n", farh, c*(farh-32));

    return 0;
}
