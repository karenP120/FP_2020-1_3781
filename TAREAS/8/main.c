#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc,char *argv[]){
    //la x es lo que queremos sacar
    //el valor a convertir es y
    float x= atof(argv[1]);
    float y= atof(argv[2]);
    if(x!=0){ 
    //este pasa de fahrenhait a celsius
        float p= (y-32)/1.8;
        printf("% .2lf",p);
    }
    else{
    //este  de celsius a fahrenhait
        float f= (y*1.8)+32;
        printf("% .2lf",f);
    }
    return 0;
}  
