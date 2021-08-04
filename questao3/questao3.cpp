#include <iostream>
#include <cstdio>
#include <time.h>


using namespace std;
int sorteio(int contador_tentativas, int numAleatorio, int numero_jogador, int novamente); 
int main(){
    int numAleatorio,
        contador_tentativas = 0,
        numero_jogador,
        novamente;
    srand((unsigned)time(NULL));
    numAleatorio = rand() % 100 + 1;
    do
    {
        cout << "Digite um numero: " << "\n";
        cin>> numero_jogador;
        contador_tentativas ++;
        novamente = sorteio(contador_tentativas, numAleatorio, numero_jogador, novamente);
    } while (novamente == 1);
    return 0;
}
int sorteio(int contador_tentativas, int numAleatorio, int numero_jogador, int novamente){
    if(numero_jogador == numAleatorio){
        cout <<"Parabeeens! Voce ganhou!" << "\n";
        cout << "O numero de tentativas: " << contador_tentativas << "\n";
        novamente = 0;
        return novamente;
    }else{
        cout << "Tente novamente!" << "\n";
        if(numero_jogador > numAleatorio)
            cout << "Numero digitado eh maior que o do sorteio " << "\n";
        else
            cout << "Numero digitado eh menor que o do sorteio " << "\n";
        novamente = 1;
        return novamente;
    }
}