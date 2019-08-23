#include <stdio.h>
#include <math.h>
int main() {
    int tamano;
    float sumatoria=0,Desviacion,media = 0,varianza;
    printf("DIgite el numero de datos que desea ingresar\n");
    scanf("%d",&tamano);
    float datos[tamano];
    for(int i = 0;i<tamano;i++){
        printf("Digite un numero\n");
        scanf("%f",&datos[i]);
        media+=datos[i];
    }
    media=media/tamano;
    for(int i = 0;i<tamano;i++){
        sumatoria=sumatoria+(powf(datos[i]-media,2));
    }
    Desviacion=sqrtf(sumatoria/tamano);
    varianza=sumatoria/tamano;
    printf("RESPUESTAS \n\n");
    printf("Media %f\n",media);
    printf("Varianza %f\n",varianza);
    printf("Desviacion tipica %f\n",Desviacion);

    return 0;
}