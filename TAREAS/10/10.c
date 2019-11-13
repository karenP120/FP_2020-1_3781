#include <stdio.h>
#include <stdlib.h>
#include <math.h>//librerias
int main(int argc, char*argv[]) {//declarando
double a, b, c, s, w, k, x1, x2, n, m, i1, i2, r1;//variables que vamos a utilizar
a=atof(argv[1]);//declarado
b=atof(argv[2]);//declarado
c=atof(argv[3]);//declarado
if(a!=0){//condicion
s=2*a;//peracion la cual se multiplica don 2 y a
w=(b*b)-(4*a*c);//operacion
if(w>=0){//aqui es una declaracion de w,en el cual nos dice de donde partir
k=sqrt(w);//operacion
x1=(b+k)/s;//operacion
x2=(b-k)/s;//operacion
if(x1==x2){//declarado
printf("%.2lf\n",x1);//operacion
}else{
printf("%.2lf\n",x1);
printf("%.2lf\n",x2);
}
}else{
n=(4*a*c)-(b*b);//aqui se multiplican y despues se restan
m=sqrt(n);//s realiza la operacion de los sqrt
i1=m/s;//division
r1=b/s;//division
printf("%.2lf+%.2lfi\n",r1,i1);//operacion
printf("%.2lf-%.2lfi\n",r1,i1);//operacion
}
}
  return 0;//final
}

