/*
Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
*/

#include <stdio.h>

#define ICMS 0.17f
#define COFINS 0.076f
#define PIS_PASEP 0.0165f


int main(){

  float preco_inicial = 100;

  float valor_icms = preco_inicial * ICMS;
  float valor_cofins = preco_inicial * COFINS;
  float valor_pispasep = preco_inicial * PIS_PASEP;
 

  float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;
   printf("O preço final é R$ %.2f\n" , preco_final);
   printf("O valor do imposto ICMS é R$ %.2f\n" , valor_icms);
   printf("O valor do imposto COFINS é R$ %.2f\n" , valor_cofins);
   printf("O valor do imposto PIS_PASEP é R$ %.2f\n" , valor_pispasep);

  return 0;

  
}