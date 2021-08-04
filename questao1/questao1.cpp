#include <iostream>
#include <stack>

using namespace std;

void inverte_palavras(string palavras)
{
    stack<char> pilha;
    int i = 0,
        pilha_tamanho;
    while (palavras[i] != '\0')
    {
        if (palavras[i] != ' ')
        {
            pilha_tamanho = pilha.size();
            pilha.push(palavras[i]);
        }
        else
        {
            for (int j = 0; j <= pilha_tamanho; j++)
            {
                cout << pilha.top();
                pilha.pop();
            }
            cout << " ";
        }
        i++;
    }
    for (int k = 0; k <= pilha_tamanho; k++)
    {
        cout << pilha.top();
        pilha.pop();
    }
}
int main()
{
    string frase;
    cout << "Digite uma frase: ";
    getline(cin, frase);
    inverte_palavras(frase);
}