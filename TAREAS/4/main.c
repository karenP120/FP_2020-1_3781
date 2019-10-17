#include <stdio.h>
#include <stdlib.h>
float z;
float x=0;

float promedio;
int main(int argc, char*argv[]) {
for(int i=1; i<argc; i++){
z=atof(argv[i]);
x=x+z;
}
promedio=x/(argc-1);
printf("%.2lf\n",promedio);

return 0;
}

