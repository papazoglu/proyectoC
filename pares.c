#include<stdio.h>

//prototipos de funciones
void carga(int v[], int n);
void imprimir(int v[], int n);

int main(){
	
	int vector[5];
	printf("Cargamos el vector:\n");
	carga(vector,5);
	printf("Imprimimos el vector:\n");
	imprimir(vector,5);
	
	
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
