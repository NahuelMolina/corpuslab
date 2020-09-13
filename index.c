#include <stdio.h>
#include <stdlib.h>

int main(){

    int N, cuentaRechazadas=0, cuentaAptas=0, cuentaMuestras=0, cuentaApBl=0;
    float densidad, promedio, suma=0;
    char color;

    printf("\n Ingrese numero de muestras: ");
    fflush(stdin);
    scanf("%d", &N);

    printf("\n Ingrese densidad: ");
    fflush(stdin);
    scanf("%", &densidad);



    printf("\n Ingrese color: ");
    fflush(stdin);
    scanf("%c", &color);

    cuentaMuestras = 1;

    while (cuentaMuestras <= N){

        cuentaMuestras++;

        if ((densidad >= 100) && (densidad <= 120)){

            cuentaAptas++;
            suma+=densidad;

            printf("\n La muestra ingresada es apta \n y la summa de densidades es %d ", suma);
            printf("\n La cantidad de aptas es %d ", cuentaAptas);

            } else {

            cuentaRechazadas++;

            printf("\n La muestra ingresada es rechazada \n y la cantidad de rechazadas es %d ", cuentaRechazadas);

            }

            if ((densidad >= 100) && (densidad <= 120) && (color == 'b')){

                cuentaApBl++;

                printf("\n La muestra ingresada es apta y blanca");


            }


        }

        printf("\n Ingrese densidad: ");
        fflush(stdin);
        scanf("%", &densidad);

        printf("\n Ingrese color: ");
        fflush(stdin);
        scanf("%c", &color);

    }

    printf("\n La cantidad de muestras rechazadas es %d ", cuentaRechazadas);

    promedio = (suma/cuentaAptas);

    printf("\n El promedio de densidades aptas es de %f ", promedio);

    printf("\n La cantidad de muestras aptas y blancas es de %d ", cuentaApBl);

    return 0;

}
