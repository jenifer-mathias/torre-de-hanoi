/********************************************************************
 Torre de Hanoi
 Implementacao usando Pilha
 Estrutura de Dados I
*******************************************************************/

#include <sstream>
#include <iostream>
#include "Pilha.h" //arquivo Header (interface)

// ------ IMPLEMENTACAO dos MÉTODOS de Pilha declarados no Header (Pilha.h)

//construtor da classe Pilha (padrao)
Pilha::Pilha() {}

//construtor da classe Pilha que aceita argumentos (Polimorfismo/Sobrecarga)
Pilha::Pilha(int n, char nome) {
    nomePilha = nome;
    topo = -1; //pilha vazia, topo = -1
    itens = new int[n]; //usando um vetor de inteiros para criar nossa Pilha
    maximo = n; //tamanho maximo da pilha
}

void Pilha::preenchePilha(int tam){

    int valor = tam;
    while(!full()){
        push(valor);
        valor--;
    }
}


bool Pilha::empty() {
    return (topo == -1);
}

bool Pilha::full() {
    return topo == maximo - 1;
}

/**
 * Insere um elemento na pilha.
 */
bool Pilha::push(int elem) {
    if (full()){
        cout << "\nA pilha ja esta cheia!\n";
        return false;
    }
    topo++;
    itens[topo] = elem;
    return true;
}

/**
 * Remove um elemento da pilha.
 */
int Pilha::pop() {
    if (empty())
        return -1;
    int elem = itens[topo];
    topo--;
    return elem;
}

/**
 * Retorna uma string com o conteudo da pilha impressa
 */
string Pilha::print() {
    stringstream ss;
    ss << "";
    Pilha aux(maximo, '.');
    int valor;
    if (empty()) {
        ss << "\nA pilha esta vazia.\n";
    }
    else {
        valor = pop();
        aux.push(valor);
        ss << "\n " << valor << " <-- Topo\n";
        while(!empty()) {
            valor = pop();
            aux.push(valor);
            ss << " " << valor << "\n";
        }
        while(!aux.empty()){
            valor = aux.pop();
            push(valor);
        }
    }
    return ss.str();
}