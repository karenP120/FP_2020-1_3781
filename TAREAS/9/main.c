#include <stdio.h>
#include <stdlib.h>//librerias
int main(int argc, char*argv[]) {//dando la entrada
int t, sum;//valores para el programa
t=atoi(argv[1]);//lo que va a pensar a ser 
sum=0;
while(t!=0){//aqui se empieza a realizar la funcion con el  while
sum=sum+(t%10);//aqui se llevara acabo la suma
t=(t/10);//la divicion 
}
printf("%i\n", sum);//lo final que es la divicion con el resultado que salio d elos valores
return 0;//final del programa
}
