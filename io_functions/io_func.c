#include <stdio.h>

//#define IN 1 // inside word
//#define OUT 0 // outside word


int power(int m, int n);

int main (){

    for (int i=0; i<10;i++)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
              
    return 0;
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



//1.5
/*  //nl - new line, nw - new word, cn - number of character in word, c -current character ;
    int c,nl,nw,cn;
    c=nl=nw=cn=0; 
    //state - curent position inside/outside word
    int state = OUT;

   while((c= getchar()) != EOF){
        c++;
        if (c=='\n') //'\n' == 10
            {
            printf ("%d\n",c);
            cn++;
            }
        if (c==' '|| c== '\t' || c=='\n')
            nw++;
            state =OUT;
        else if (sate == OUT) 
            state=IN; */





    //why int? - EOF is int (special numeric symbol)
    
    // printing EOF (task1-6)
    // printf() and putchar() debug a different value
    //printf("%d\n",getchar()!= EOF);//1 => 1, 0 => 1
    //printf("%d\n",getchar()== EOF);//0
    //putchar(getchar()== EOF);//1 => nothing, 0 => nothing
    //putchar(getchar()!= EOF);//1 => nothing, 0 => nothing
    //(task 1-7)
    /*
    printf("%d\n",EOF); // -1
    putchar(EOF);//�
    printf("\n");
    */ 