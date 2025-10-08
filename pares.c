#include<stdio.h>
#define N 5

//prototipos de funciones
void carga(int v[], int n);
void imprimir(int v[], int n);

int main(){
	
	int vector[N];
	printf("Cargamos el vector:\n");
	carga(vector,N);
	printf("Imprimimos el vector:\n");
	imprimir(vector,N);
	
	
	return 0;
}

void carga(int v[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("ingrese un valor: \n");
		scanf("%i",&v[i]);
	}
}

void imprimir(int v[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("valor: %i\n",v[i]);
	}
}
