#include <iostream>
#include <stack>

using namespace std;

void inverter(stack<string> &pilha, string l){
  string letra;
  letra = l;
  pilha.push(letra);
  cout << pilha.top();
}

int main()
{
    stack<string> str;
    string aux, aux2;

    cout << "Digite algo: ";
    cin >> aux;

    for (int i = aux.length(); i >= 0; i--){
        aux2 = aux[i];
        inverter(str, aux2);
    }

    return 0;
}


