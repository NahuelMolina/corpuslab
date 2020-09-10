#include<stdio.h>

int main() {
    int cant = 0;
    int EachWorker[cant];
    int i; 
    char tipo[20];
    char tipoAnte[20];
    int firsType, secondType, thirdType, fourType;

    printf("Ingresa la cantidad de viñateros");
    scanf("%i", &cant);

    for (i=0;i<cant;i++){
        printf("Ingresa la cantidad de uva para el %i viñatero", i+1);
        scanf("%i", &EachWorker[i]);
        printf("Ingresa el tipo de uva que produce");
        gets (tipo);

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


    printf("La cantidad producida de moscatel total es: %i", firsType);
    printf("La cantidad producida de comunes total es: %i", secondType);
    printf("La cantidad producida de blancas total es: %i", thirdType);
    printf("La cantidad producida de la otra nose cual es de: %i", fourType);
    
    return 0 ;
}
