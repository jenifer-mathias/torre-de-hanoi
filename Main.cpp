/********************************************************************
 Torre de Hanoi
 Implementacao usando Pilha
 Estrutura de Dados I
*******************************************************************/

#include <cstdlib>
#include <iostream>
#include <curses.h>

#include "stack/Pilha.h" //Header com declaracao dos metodos/operacoes
#include "hanoi/Hanoi.h" //Header com declaracao dos metodos/operacoes

using namespace std;

// ----------------- Metodo main para teste do Torre de Hanoi
int main() {

    cout << "\n              Iniciando a execução ... \n\n\n";
    cout << "Antes de tudo, qual o tamanho da torre que deseja criar? ";
    int tam;
    cin >> tam;
    int opc;

    Pilha pinoA(tam, 'A'); //criando uma Pilha de tamanho tam
    Pilha pinoB(tam, 'B');
    Pilha pinoC(tam, 'C');

    cout << "\n\n\n";
    cout << "\n---------------------------------------------------------------";
    cout << "\n                        TAD PILHA";
    cout << "\n (esta pilha só aceita números inteiros maiores do que zero)";
    cout << "\n---------------------------------------------------------------";

    pinoA.preenchePilha(tam);

    int contador = 0;

    Hanoi::hanoi(tam, pinoA, pinoC, pinoB, contador);

    cout << "\n\npinoA" << pinoA.print();
    cout << "\npinoB" << pinoB.print();
    cout << "\npinoC" << pinoC.print();
    cout << "\nForam realizados " << contador << " movimentos na torre";

    do {
        cout << "\n\n________________________   MENU   _____________________________\n";
        cout << "\n0 - sair\n";
        cout << "\n1 - verificar outra torre\n";
        cout << "\n\n_______________________________________________________________\n";

        cout << "\n\nInforme sua opção: ";
        cin >> opc;

        switch (opc) {
            case 0: {
                cout << "\n Agradecemos a participação!";
                cout << "\n\n ~~~~ Fim da execucao! ~~~~\n\n";
                break;
            }

            case 1: {
                cout << "\n\nInforme outra quantidade de discos: ";
                cin >> opc;
                cout << "\n\npinoA" << pinoA.print();
                cout << "\npinoB" << pinoB.print();
                cout << "\npinoC" << pinoC.print();
                cout << "\nForam realizados " << contador << " movimentos na torre";
                break;
            }
        }
    } while (opc != 0);
}