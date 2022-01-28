#include <iostream>
using namespace std;


int main (){

// Onibus tem capacidade máxima de 50 passageiros
// Requisitos retornar quantos assentos vazios tem no onibus.



 // Declarando as variavéis.
int passageiros , assentos_vazios;
  
// Entrada de dados.
passageiros = 231;

//Processamento dos dados.
passageiros = passageiros % 50;

assentos_vazios = 50 - passageiros;

//Saída dos dados.
cout << assentos_vazios << endl;

return 0;
}