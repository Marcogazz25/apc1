/*
Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
  */

#include <stdio.h> 
 int main() {
  int raio_da_pizza = 20;
   float PI = 3.1416;

   float perimetro_da_pizza = 2* PI *raio_da_pizza;

   printf("O perimetro da pizza é %f\n",perimetro_da_pizza); 


   return 0;
 }