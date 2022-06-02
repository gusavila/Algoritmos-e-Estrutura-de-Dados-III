#include <iostream>
#include <stack>

using namespace std;

void inverterTexto(stack<string> p){
  if (!p.empty()){
    while(!p.empty()){

      string aux2,aux3, aux4;
      string aux = p.top();
      p.pop();

      for(int i = aux.length(); i >= 0; i--){
        aux2 = aux2 + aux[i];
      }

      for(int i = 0; i <= aux2.length(); i++){
        aux3 = aux3 + aux2[i];
        aux4 = aux2[i];
        if(aux4 == " "){
            p.push(aux3);
            aux3 = "";
        }
        if(i == aux2.length()){
            p.push(aux3);
        }
      }
    while(!p.empty()){
      cout << p.top();
      p.pop();
    }
}
}
  else {
    cout << "Pilha vazia" << endl;
  }
}

int main() {
  stack<string> pilha;
  string texto;

  cout << "Digite um texto: ";
  getline(cin,texto);

  pilha.push(texto);

  inverterTexto(pilha);
}
