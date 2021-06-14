#ifndef ALUNO_H
#define ALUNO_H

#include <string>
#include <iostream>

using namespace std;

struct Aluno{
    string nome;
    int matricula;

    Aluno(string nome, int matricula);
    void _set(string x, int y);
    void imprimir_dados();
    Aluno() = default;
    
};

#endif