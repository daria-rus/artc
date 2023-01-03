#include <stdio.h>


int power(int m, int n);
float temperature_converter_to_celsium (int farh);

int main (){
     // test power function
    for (int i=0; i<10;i++)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));

    //test temperature converter

    for (int farh = 0; farh<=300; farh+=20)
        printf("%3d %6.1f\n", farh, temperature_converter_to_celsium(farh));

    return 0;
}

//1.15 temperature converter
float temperature_converter_to_celsium (int farh){

    return (5.0/9.0)*(farh-32);    
}


/* power power: raise base to n-th power; n >= 0 */
int power(int baze, int n){  
    int p=1;
    for (int i = 0; i<=n; i++)
    {
        p *= baze;
    }
    return p;
}
