// NÃO ALTERE ESSA LINHA
//#include "avaliacao_basica_bst.hpp"
#include <iostream>
#include "Aluno.hpp"
#include "BST.hpp"

using namespace std;

int main() {                        
  
    // NÃO ALTERE ESSA LINHA
    //avaliacao_basica();

    //
    // Adicione seu código aqui e faça as demais alterações necessárias
    //

    Aluno x;
    BST y;

    int matricula = 0;
    string nome  = {};

    while(cin >> matricula >> nome){
        x.nome = nome;
        x.matricula = matricula;
        y.inserir_aluno(x);
    }

    //
    // Ao final faça uma chamada para o método 'imprimir_arvore()'
    //
    y.imprimir_arvore();

    return 0;
}