#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
//nos ayuda a tomar valores que s enecesitan,que es la base y a que exponente se quiere aumentar
int b= atoi(argv[1]); //base
int e= atoi(argv[2]);//exponente
int p= pow(b,e);//esta funcion  es la que realiza la operacion
printf("%i\n",p);
return 0;
}

