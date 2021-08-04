#include <iostream>
#include <stack>

using namespace std;

void verifica_palindromo(string palavras)
{
    stack<char> pilha;
    int i = 0,
        pilha_tamanho,
        palavras_tamanho = palavras.length(),
        contador_palindrome = 0,
        contador_naopalindrome = 0;
    bool status = true;
    while (palavras[i] != '\0')
    {
        pilha.push(palavras[i]);
        pilha_tamanho = pilha.size();
        i++;
    }
    for (int k = 0; k < palavras_tamanho; k++)
    {
        if (palavras[k] != pilha.top())
        {
            contador_naopalindrome ++;
        }else{
            contador_palindrome++;
        }
            pilha.pop();
    }
    if (contador_palindrome == pilha_tamanho)
        cout << "\nPalindrome\n";
    else
        cout << "\nNao palindrome\n";
}
int main()
{
    string frase;
    cout << "Digite uma frase: ";
    getline(cin, frase);
    verifica_palindromo(frase);
}