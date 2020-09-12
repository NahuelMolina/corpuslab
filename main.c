#include <stdio.h>
#include <stdlib.h>

int main (){
    int i,contM,contB,contC,contT,cantvinateros,cont;
    char letra;
    float cantuva,totaluva,promedio;
    contM=contB=contC=contT=cont=0;
    contador=promedio=0;
    printf("Cantidad de viñateros \n");
    scanf("%d", &cantvinateros);
     for (i=1;i<=cantvinateros;i++) {
        printf("Cuantas uvas cosechaste \n");
        scanf("%f", &cantuva);
        printf("Que tipo de uva \n");
        fflush(stdin);
        letra=getchar();
        if ( letra == 'm' ) {
            contM+= cantuva ;
            cont += cantuva;
        }else if (letra == 'b') {
            contB+= cantuva ;
            cont += cantuva;
            } else if (letra =='t') {
                contT+= cantuva;
                } else {
                    contC+= cantuva;
                }
        totaluvas += cantuva;
    }
	promedio=(float)cont * 100 / totaluvas;

    printf("Total de uvas cosechadas:  %f\n", totaluvas);
    printf("Porcentaje de uva moscatel y blanca: %f\n",promedio);
    printf("La cantidad de kd cosechados de moscatel son: %d\n la cantidad de kg cosechados de Blanca son: %d\n la cantidad de kg cosechados de Comunes son: %d\n la cantidad de kg cosechados de Tintas son: %d\n",contM,contB,contC,contT);

    return 0;
   }
