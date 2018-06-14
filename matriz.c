
#include <stdio.h>

 int main(){
  
  int m,n,f,c,i,j,k;
  float A[100][100],B[100][100],C[100][100];
  printf("\n-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");
  printf("\nINGRESE EL NUMERO DE FILAS Y COLUMNAS DE LA PRIMER MATRIZ RESPECTIVAMENTE\n");
  scanf("%d",&m);
  scanf("%d",&n);
  printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("\nINGRESE EL NUMERO DE FILAS Y COLUMNAS DE LA SEGUNDA MATRIZ RESPECTIVAMENTE\n");
  scanf("%d",&f);
  scanf("%d",&c);
  printf("\n");
  if (n==f){printf("\n같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같�\n");
  printf("INGRESE EL VALOR DE LA PRIMERA MATRIZ\n\n");
  
  //INGRESE LAS MATRICES 
  for (i=1;i<=m;i++) 
  for (j=1;j<=n;j++){ 
  printf("A(%d,%d)= ",i,j);
   scanf ("%f",&A[i][j]);
   }
   printf("\n");
   printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
   printf("\nINGRESE EL VALOR DE LA SEGUNDA MATRIZ\n\n");
    for (i=1;i<=f;i++) 
	for (j=1;j<=c;j++) { 
	printf("B(%d,%d)= ",i,j);
	 scanf ("%f",&B[i][j]);}

	 //op 
	 for (i=1;i<=m;i++) {
	 for (j=1;j<=c;j++) { 
	 C[i][j]=0;
	  for (k=1;k<=n;k++) {C[i][j]=C[i][j]+A[i][k]*B[k][j];
	   } } } printf("\n---------------------------------------------------\n");
	    printf("\nLA MULTIPLICACION DE LAS MATRICES ES:\n\n");
		//IM 
		for (i=1;i<=m;i++) 
		for (j=1;j<=c;j++) { 
		printf("C(%d,%d)=\t%4.2f\n",i,j,C[i][j]);
		 }
		 }
		 else{
		 printf("\n_________________________________________\n");
		 printf("Estas matrices no se pueden multiplicar \n");
		 printf("debido a que el numero de columnas de la\n");
		 printf("matriz A es diferente al numero de filas\n");
		 printf("de la matriz B, !Vuelva a intentarlo! \n");
		 }
		  getchar();
		  getchar();
		  }
