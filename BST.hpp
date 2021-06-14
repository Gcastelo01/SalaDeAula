#ifndef BST_H
#define BST_H

#include "Aluno.hpp"

struct Node{
    Aluno aluno;
    
    Node* bef = nullptr;
    Node* esq = nullptr;
    Node* dir = nullptr;

    Node(Aluno aluno);
    Node() = default;
};

struct BST{
    Node* root = nullptr;


    void inserir_aluno(Aluno aluno);
    void insert_aluno_helper(Node* root, Aluno aluno);
    void imprimir_arvore();
    Aluno* procurar_aluno(int matricula);
    void imprimir_arvore_aux(Node* x);
    void imprimir_dados_volta(Node* x);
};


#endif