#include <iostream>
#include "Aluno.hpp"
#include "BST.hpp"

using namespace std;

int main() {                        
    Aluno x;
    BST y;

    int matricula = 0;
    string nome  = {};

    while(cin >> matricula >> nome){
        x.nome = nome;
        x.matricula = matricula;
        y.inserir_aluno(x);
    }

    y.imprimir_arvore();

    return 0;
}