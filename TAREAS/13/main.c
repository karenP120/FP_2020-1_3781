#include <stdlib.h>
#include <stdio.h>
//funcion que se encargara de ordenar el arreglo
void burbuja(int *item, int cont) {
    int i, j, ordenado ;
    int temp;

    for (i = 1; i < cont; i++) {
//Hace la funcion de apuntadores uno apunta el numero y otro ve si es mayor o menor  
        for (j = cont; j > i; j--) {
//El j hace que recorra la posicion de menor a mayor
            ordenado = 1;
            if (item[j-1] > item[j]) {
                temp = item[j-1];
                item[j-1] = item[j];
                item[j] = temp;
                ordenado++;
            }
        }
        /*cuando la variable ordenado sea igual a 0
          significara que el arreglo este ordenado
          y no sera necesario seguir recorriendo el
          arreglo para hacer comparaciones*/
        if (ordenado == 0)
        break;
    }
}
int main(int argc, char*argv[]) {
    //definimos el tamaño del arreglo
    int arreglo[argc];
    //ingresamos valores al arreglo
    for (int i = 1; i < argc; i++){
        double x=atof(argv[i]);
        arreglo[i]=x;
    /*hacemos el llamado a la funcion burbuja, a la cual
      le pasamos como parametros el arreglo y el tamaño*/  
}
burbuja(arreglo, argc-1);
    /*mostramos el arreglo ordenado*/
     for (int i = 1; i < argc; i++)
        printf("%d  ", arreglo[i]);

}


