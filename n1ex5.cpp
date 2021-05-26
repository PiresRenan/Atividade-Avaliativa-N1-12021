#include <stdio.h>
#include <stdbool.h>
int main(){
  float numero;
  char letra;
  
  printf("Digite um numero real:");
  scanf("%f",&numero);
  printf("\nDigite A, B ou C:");
  scanf(" %c",&letra);
    if(letra == 'A' && (int)numero%2==0){
        numero=numero*2;
        printf("Letra A!");
        printf("\n•O dobro eh:%f•",numero);
        }else if(letra == 'A' && (int)numero%2!=0){
        numero=numero/2;
        printf("Letra A!");
        printf("\n•A metade eh:%f•",numero);
    }
    if(letra == 'B' || letra=='b' ){
        numero=numero*0.4;
        printf("Letra B!");
        printf("\n•O valor de 40 por cento eh:%f",numero);
        
    }
    if(letra == 'C' || letra=='c' ){
        numero=numero*numero;
        printf("Letra C!");
        printf("\n•O numero elevedo ao quadrado eh:%f•",numero);
    }
  return 0;
}