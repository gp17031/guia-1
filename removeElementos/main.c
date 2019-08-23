#include <stdio.h>

int main() {
    int numeroD,posicion;
    printf("Digite el numero de datos a ingresar\n");
    scanf("%d",&numeroD);
    int vector[numeroD];
    for(int i = 0;i<numeroD;i++){
        printf("Digite un numero cualquiera\n");
        scanf("%d",&vector[i]);
    }
    for(int i = 0;i<numeroD;i++){
        printf("Dato en la posicion # %d con valor de: %d \n",i+1,vector[i]);
    }
    printf("Digite el numero de la posicion que desea eliminar\n");
    scanf("%d",&posicion);
    vector[posicion-1]=0;
    printf("VECTOR RESULTANTE\n\n");
    for(int i = 0;i<numeroD;i++){
        if(vector[i]!=0){
            printf("valor: %d \n",vector[i]);
        }
    }
    return 0;
}