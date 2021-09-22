/********************************************************************
 Torre de Hanoi
 Implementacao usando Pilha
 Estrutura de Dados I
*******************************************************************/
//Arquivo de cabeçalho (Interface)

using namespace std;

class Hanoi {

public:
    static void hanoi(int tam, Pilha &origem, Pilha &destino, Pilha &aux, int &contador);
};

void Hanoi::hanoi(int tam, Pilha &origem, Pilha &destino, Pilha &aux, int &contador) {
    if (tam >= 1) {
        hanoi(tam - 1, origem, aux, destino, contador);
        contador++;
        int retiraorigem = origem.pop();
        int colocadestino = destino.push(retiraorigem);
        cout << "\n movendo o disco de " << origem.nomePilha << " para " << destino.nomePilha;
        hanoi(tam - 1, aux, destino, origem, contador);
    }
    return;
}
