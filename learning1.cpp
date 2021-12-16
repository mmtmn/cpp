#include <iostream>
#include <string.h>
using namespace std;
int main(){
  string p_nome;
  string u_nome;
  cout << "Primeiro nome: ";
  cin >> p_nome;
  cout << "Último nome: ";
  cin >> u_nome;
  cout << "Olá " << p_nome << " " << u_nome << "!";
  return 0;
}