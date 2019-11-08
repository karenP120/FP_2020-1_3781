#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	double resultado=1;//se declara esta variable para utilizarla en la multiplicacion
	double y=atof(argv[2]);
	for (int i=0; i<y; i++){//inicia en 0 ytermina hasta que sea menor
		double x=atof(argv[1]);//se cambio el argumento  y luego se efectua la multiplicacion
		resultado=resultado*x;
	}
	printf("%.2lf", resultado);
	return 0;
}
