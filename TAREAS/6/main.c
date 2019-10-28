#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){//para ver cuantos parametros de entrada estoy metiendo
int s=1;// aqui empece a mosatrar que inicoa en 0
int r,j,k;// estas son las variables que ese van a utilizar
for(int i=1;i<argc;i++){ // aqui empezamos a mostrar
j=atoi(argv[i]);// se empieza
s=s*j;// se multiplican
}
for(int w=1;w<argc; w++){//aqui empezamos a checar
	k=atoi(argv[w]);//se empieza a checar
	r=s/k;//se divide el valor
	printf ("%i\n",r);// aqui solo se muestra el printf
}
return 0;
}