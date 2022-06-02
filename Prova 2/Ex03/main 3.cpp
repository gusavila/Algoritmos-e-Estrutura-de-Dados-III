#include <iostream>
#include <queue>
#include <stack>
#include <locale>

using namespace std;

void inserirPares(queue<int> &pa, int b){
    int novo;
    novo = b;
    pa.push(novo);
}

void inserirImpares(queue<int> &im, int b){
    int novo;
    novo = b;
    im.push(novo);
}

void empilhar(stack<int> &p, int a, queue<int> &pares, queue<int> &impares){
    if(a != 0){
    int novo, aux;
    novo = a;
    p.push(novo);
    aux = p.top();
    if(aux%2 == 0){
        inserirPares(pares, aux);
    }
    else {
        inserirImpares(impares, aux);
    }
    }
}

void imprimirPilha(stack<int> &p){
  cout << " Pilha: ";
  if (!p.empty()){
    while(!p.empty()){
      cout << p.top() << ", ";
      p.pop();
    }
    cout << endl;
  }
  else {
    cout << " Pilha vazia" << endl;
  }
}

void imprimirPares(queue<int> &pa){
  cout << " Pares: ";
  if (!pa.empty()){
    while(!pa.empty()){
      cout << pa.front() << ", ";
      pa.pop();
    }
    cout << endl;
  }
  else {
    cout << " Não há números pares" << endl;
  }
}

void imprimirImpares(queue<int> &im){
  cout << " Impares: ";
  if (!im.empty()){
    while(!im.empty()){
      cout << im.front() << ", ";
      im.pop();
    }
    cout << endl;
  }
  else {
    cout << " Não há números impares" << endl;
  }
}

int main()
{
    setlocale(LC_ALL,"portuguese");

    stack<int> pilha;
    queue<int> pares, impares;

    int numero;

    cout << "------------------ CADASTRO DE NUMEROS ------------------" << endl;
    cout << "\nDigite um numero menor ou igual a zero para finalizar o cadastro \n\n";

    do{
    cout << " -> ";
    cin >> numero;
    empilhar(pilha, numero, pares, impares);
    }while(numero > 0);
    cout << endl;

    imprimirPilha(pilha);
    imprimirPares(pares);
    imprimirImpares(impares);


    return 0;
}
