#include<stdio.h>
#include<math.c>

main(){

    int a, b, c, d;

    if(a > b && a > c && a > d){
        printf("A e o maior");
        //achar o menor entre b, c e d
        if(b < c && b < d){
            printf("\nB e o menor");
        }else if(c < b && c < d){
        printf("\nC e o menor");
        }else if{
            printf("\nD e o menor");
        }
    }else if(b > a && b > c && b > d){
         printf("B e o maior");
        //achar o menor entre a, c e d
        if(a < c && a < d){
            printf("\nA e o menor");
        }else if(c < a && c < d){
        printf("\nC e o menor");
        }else if{
            printf("\nD e o menor");
        }

    }else if(c > a && c > b 77 c > d){
        printf("C e o maior");
        //achar o menor entre a, b e d
        if(a < b && a < d){
            printf("\nA e o menor");
        }else if(b < a && b < d){
        printf("\nB e o menor");
        }else if{
            printf("\nD e o menor");
        }

    }else if{
        printf("D é o maior");
        //achar o menor entre a, b e c
        if(a < b && a < c){
            printf("\nA e o menor");
        }else if(b < a && b < c){
        printf("\nB e o menor");
        }else if{
            printf("\nC e o menor");
        }
    }
}



//outra forma de fazer o codigo 

if(a > b && a > c && a > d){
    maior= A;
}else if(b > c && b > d && b > a){
    maior = B;
}else if(c > a && c > d && c > b){
    maior = C;
}else{ maior  = d;
}