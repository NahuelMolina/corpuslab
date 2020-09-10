#include<stdio.h>
#include<stdlib.h>

int main() {
    int cant = 0;
    int EachWorker[cant];
    int i; 
    char tipo[20];
    char tipoAnte[20];
    int firsType = 0, secondType =0, thirdType=0, fourType=0;

    printf("Ingresa la cantidad de viñateros");
    scanf("%i", &cant);

    for (i=0;i<cant;i++){
        fflush(stdin);
        printf("Ingresa la cantidad de uva para el %i viñatero:\n", i+1);
        scanf("%i", &EachWorker[i]);
        fflush(stdin);
        printf("Ingresa el tipo de uva que produce:\n");
        scanf("%s",&tipo);

        if(tipo == "moscatel"){
            firsType = firsType + EachWorker[i];
        }else if (tipo == "comunes"){
            secondType = secondType + EachWorker[i];
        }else if ("blancas"){
            thirdType = thirdType + EachWorker[i];
        }else {
            fourType = fourType + EachWorker[i];
    
        }
    };

    printf("Cantidad de cada trabajador");
    for(i=0;i<cant;i++){
        printf("Para el %i: %i",i+1 ,EachWorker[i]);    
    };

    printf("La cantidad producida de moscatel total es: %i \n", firsType);
    printf("de comunes es: %i \n", secondType);
    printf("blancas es: %i \n", thirdType);
    printf("de la otra nose cual es de: %i \n", fourType);
    
    return 0 ;
}
