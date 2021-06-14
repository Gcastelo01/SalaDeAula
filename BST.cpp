#include "BST.hpp"

Node::Node(Aluno aluno){
    this->aluno = aluno;
}

Node* create_node(Aluno a, Node* x){
    Node* aux = new Node;
    aux->aluno = a;
    aux->dir = nullptr;
    aux->esq = nullptr;
    aux->bef = x;

    return aux;
}

void BST::inserir_aluno(Aluno aluno){
    if(this->root != nullptr){
        insert_aluno_helper(this->root, aluno);

    }else{
        root = create_node(aluno, nullptr);

    }

}

void BST::insert_aluno_helper(Node* n, Aluno aluno){
    if(aluno.matricula < n->aluno.matricula){
        if(n->esq == nullptr){
            n->esq = create_node(aluno, n);

        }else{
            insert_aluno_helper(n->esq, aluno);

        }
    }else if(aluno.matricula > n->aluno.matricula){
        if(n->dir == nullptr){
            n->dir = create_node(aluno, n);

        }else{
            insert_aluno_helper(n->dir, aluno);

        }
    }
}

Aluno* BST::procurar_aluno(int matricula){
    Node* auxd = root->dir;
    Node* auxe = root->esq;
    
    if(matricula == root->aluno.matricula){
        return &root->aluno;

    }else if(matricula < root->aluno.matricula){

        while(auxe != nullptr){
            if(matricula < auxe->aluno.matricula){
                auxe = auxe->esq;

            }else if(matricula > auxe->aluno.matricula){
                auxe = auxe->dir;

            }else if(matricula == auxe->aluno.matricula){
                return &auxe->aluno;

            }else{
                return nullptr;

            }
        }

    }else{
        while(auxd != nullptr){
            if(matricula < auxd->aluno.matricula){
                auxd = auxd->esq;

            }else if(matricula > auxd->aluno.matricula){
                auxd = auxd->dir;

            }else if(matricula == auxd->aluno.matricula){
                return &auxd->aluno;

            }else{
                return nullptr;

            }
        }
    }
    return nullptr;  
}


void BST::imprimir_dados_volta(Node* x){
    if(x->bef != nullptr){    
        if(x->bef->aluno.matricula > x->aluno.matricula){
            x->bef->aluno.imprimir_dados();

            if(x->bef->dir != nullptr) imprimir_arvore_aux(x->bef->dir);
            else imprimir_dados_volta(x->bef);

        }else{
            imprimir_dados_volta(x->bef);

        }
    }
}

void BST::imprimir_arvore_aux(Node* x){
    if(x->esq != nullptr){
        imprimir_arvore_aux(x->esq);

    }else{
        x->aluno.imprimir_dados();

        if(x->dir != nullptr){
            imprimir_arvore_aux(x->dir);

        }else {
            imprimir_dados_volta(x);
        }
    }
}

void BST::imprimir_arvore(){

    Node* menor = this->root;
    
    if(menor->esq != nullptr) imprimir_arvore_aux(menor->esq);
    else{
        menor->aluno.imprimir_dados();
        if (menor->dir != nullptr){
            imprimir_arvore_aux(menor->dir);
        }
        
    }
}