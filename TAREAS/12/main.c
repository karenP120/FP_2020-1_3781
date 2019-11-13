#include <stdio.h>
#include <stdlib.h>//librerias
int APRETONES(int personas){//valores que se ponene para empezar a programar
  int res;//valores
  int z;//valores
  if(personas==1){//primera funcion que se derrolla
    return 0;
  }else{
    z=APRETONES(personas-1)+(personas-1);//la operacion
    return z;
  }
}
int main(int argc, char*argv[]) {//funcion
int a, ans;//declarar valores
a=atoi(argv[1]);//se lleva acabo la funcion
ans=APRETONES(a);//aqui tambin se lleva acabo la funcion
printf("%i\n",ans);//aqui se utiliza para que se realice la operacion 
return 0;//final del programa
}
