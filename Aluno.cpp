#include "Aluno.hpp"

Aluno::Aluno(string nome, int matricula){
    this->matricula = matricula;
    this->nome = nome;

}
void Aluno::imprimir_dados(){
    cout << this->matricula << " " << this->nome << endl;
    
}
void Aluno::_set(string x, int y){
    this->matricula =  y;
    this->nome = x;
}