#include <stdio.h>

int main() {
    int tamano,temp;
    printf("Cuantos datos desea ingresar\n");
    scanf("%d",&tamano);
    int vector[tamano];
    int vector_copia[tamano];
    for(int i = 0;i<tamano;i++){
        printf("Digite un numero\n");
        scanf("%d",&vector[i]);
    }
    for(int i = 0;i<tamano;i++){
        temp=vector[i];
        vector_copia[i] = temp;
    }
    for(int i = 0;i<tamano;i++){
        printf("%2d",vector_copia[i]);
    }
    return 0;
}