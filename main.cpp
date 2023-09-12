#include <iostream>

using namespace std;

void buscaSequencial(int vetor[], int tamanho, int valorBuscado) {
    bool encontrado = false;

    cout << "Chave encontrada nas posicoes:";
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valorBuscado) {
            cout << " " << i;
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << " Chave não encontrada";
    }

    cout << endl;
}

int main() {
    int tamanho = 5;
    int vetor[] = {1,2,3,2,4};
    int valorBuscado = 2;

    buscaSequencial(vetor, tamanho, valorBuscado);
    
	system("pause");
    return 0;
}
