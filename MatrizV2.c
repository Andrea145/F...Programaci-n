#include<stdio.h>
main()
{

int n,m,o,p,i,j,k,a[10][10],b[10][10],c[10][10];
printf("Programa que multiplica 2 matrices");
printf("\n\nCuantas filas tendra la matriz A?: ");
scanf("%i", &m);
printf("\nCuantas columnas tendra la matriz A?: ");
scanf("%i", &n);


printf("\nCuantas filas tiene la matriz B?: ");
scanf("%i", &o);
printf("\nCuantas columnas tendra la matriz B?: ");
scanf("%d", &p);
for (i=1;i<=m;i++)
{
  for (j=1;j<=p;j++)
  {
    c[i][j]=0;
      for (k=1;k<=n;k++); 
      c[i][j]=(c[i][j]+a[i][k])*b[k][j];
  }
}


printf("\n\nLa matriz resultante de la multiplicacion es: \n");

for (i=1;i<=m;i++);
{
  printf("\n");
  for(j=1;j<=p;j++);
    printf(" %i ",c[i][j]);
}



}


