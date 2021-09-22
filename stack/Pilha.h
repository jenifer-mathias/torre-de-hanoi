/********************************************************************
 Torre de Hanoi
 Implementacao usando Pilha
 Estrutura de Dados I
*******************************************************************/
//Arquivo de cabeçalho (Interface)

//É um arquivo reutilizável no projeto e contém a declaração da classe,
//atributos e metodos (mas nao suas implementacoes)

using namespace std;

class Pilha {

private: //atributos visiveis somente na classe onde é utilizado. Por default já são privados!
    int *itens;
    int topo;
    int maximo;

public: //visiveis a todas as classes do projeto
//declaracao da assinatura dos metodos
    char nomePilha;
    Pilha();
    Pilha(int n, char nome);
    bool empty();
    bool full();
    bool push(int);
    int pop();
    string print();
    void preenchePilha(int tam);
};