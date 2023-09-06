/*
Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
  */

#include <stdio.h>

int main()
{
 // Variáveis 
 float area,base,altura;

 // Entrada de Dados
 printf("\n Informe a base do triângulo: ");
 scanf("%f",&base);
 printf("\n Informe a altura do triângulo: ");
 scanf("%f",&altura);

 // Processamento dos dados
 area=(base*altura)/2;

 // Exibição do resultado
 printf("\n Area do triângulo=%.1f\n",area);
 return 0;

}