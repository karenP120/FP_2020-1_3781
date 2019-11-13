#include <stdio.h>
#include <stdlib.h>//librerias
#include <math.h>
double RAIZ(double x, double tol, double candidato){//declarando variables
  double division, diferencia, promedio;//operacion
  division=x/candidato;
  diferencia=fabs(division-candidato);//la divicion que se llevara acabo
  while(diferencia>tol){//la operacion de el diferencial y el total
    division=x/candidato;
    diferencia=fabs(division-candidato);//aqui se lleva acabo lo que es la operacion
    promedio=(candidato+division)/2;//como se saca el promedio
    candidato=promedio;//la igualdad de ambos
  }
  return candidato;
}
int main(int argc, char*argv[]) {//variables donde se declara
double numero, tolerancia, ans, candidato;//valores
numero=atof(argv[1]);//operacion
candidato=atof(argv[3]);//operacion
tolerancia=atof(argv[2]);//operacion
ans=RAIZ(numero, tolerancia, candidato);// aqui la raiz toma los resultados obtenidos.
printf("%lf\n",ans);//operacion
return 0;//finalizado
}
