#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc,char *argv[]){
    //la x es lo que queremos sacar
    //el valor a convertir es y
    double x= atof(argv[1]);
    double y= atof(argv[2]);
    if(x!=0){ 
    //este pasa de fahrenhait a celsius
        double p= (y-32)/1.8;
        printf("% .2lf",p);
    }
    else{
    //este  de celsius a fahrenhait
        double f= (y*1.8)+32;
        printf("% .2lf",f);
    }
    return 0;
}  