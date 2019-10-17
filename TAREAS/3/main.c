#include <stdio.h>
#include <stdlib.h>

int main (int argc,char*argv[])
{

float z,x,y,m,n1,n2;
n1= atof (argv [1]);
n2= atof (argv [2]);

z= n1+n2;
x= n1-n2;
y= n1*n2;
m= n1/n2;

printf ("%.2lf\n",z);
printf ("%.2lf\n",x);
printf ("%.2lf\n",y);
printf ("%.2lf\n",m);

return 0;
}

