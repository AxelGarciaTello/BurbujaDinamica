#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void llenarArreglo(int *arreglo, int tamanio){
  int i=0;
  for(i=0; i<tamanio; i++){
    *(arreglo+i)=(rand()%1000)+1;
  }
}

void mostrarArreglo(int *arreglo, int tamanio){
  int i=0;
  for(i=0; i<tamanio; i++){
    printf("%d\n", *(arreglo+i));
  }
}

void burbuja(int *arreglo, int tamanio){
  int i=0,
      j=0,
      cambio=0;
  for(i=1; i<tamanio; i++){
    for(j=0; j<tamanio-1; j++){
      if(*(arreglo+j)>(*(arreglo+j+1))){
        cambio=(*(arreglo+j));
        *(arreglo+j)=(*(arreglo+j+1));
        *(arreglo+j+1)=cambio;
      }
    }
  }
}

int main(void){
  int tamanio=0,
      *arreglo=0;

  srand (time(NULL));

  printf("¿De que tamaño va a ser su arreglo?\n");
  scanf("%d", &tamanio);

  arreglo=(int *) malloc(tamanio*sizeof(int));
  llenarArreglo(arreglo, tamanio);

  printf("\nSu arreglo es:\n");
  mostrarArreglo(arreglo, tamanio);

  burbuja(arreglo, tamanio);

  printf("\nSu arreglo ordenado es:\n");
  mostrarArreglo(arreglo, tamanio);
}
