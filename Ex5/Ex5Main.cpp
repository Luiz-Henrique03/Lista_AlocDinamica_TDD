/*Faça um programa que leia um numero N e: ´
• Crie dinamicamente e leia um vetor de inteiro de N posic¸oes; ˜
• Leia um numero inteiro X e conte e mostre os m ´ ultiplos desse n ´ umero que existem ´
no vetor*/

#include <iostream>
#include "Ex5.h"

using namespace std;



int main(){
  const int TAMANHO = 5,
              X = 2;

   int *vetor = new int(TAMANHO);

   PreencheVetor(vetor,TAMANHO);

   cout << QtdMultiplo(vetor,TAMANHO,X);







}