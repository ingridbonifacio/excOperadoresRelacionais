#include <stdio.h>
#include <math.h>

main(){

float numero;
printf("Digite um numero: ");
scanf("%f", &numero);

if(numero >= 0){
    //imprimir a raiz quadrada
    resultado = sqrt(numero);
    printf("Raiz: %f", resultado);
}else {
    //imprimir quadrado do numero
    resultado = pow(numero, 2);
    printf("Quadrado: %f", resultado);
    }
}