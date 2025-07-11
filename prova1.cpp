#include <iostream>

using namespace std;

class Pilha{
    public:

    int valor;
    Pilha* elo;

    Pilha* InserirPilha(Pilha* topo, int v){
        Pilha* novo = new Pilha();
        novo -> valor = v;
        novo -> elo = topo;
        return novo;
    }
};

class Fila{
    public:

    int valor;
    Fila* elo;

    Fila* InserirFila(Fila* fim, int v){
        Fila* aux = new Fila();
        aux -> valor = v;
        aux -> elo =NULL;

        if (fim != NULL){
            fim -> elo = aux;
        }

        return aux;
    }
};



int main() {

    Pilha P;
    Fila F;

    int num, i;
    Pilha* topo= NULL;
    Fila* fim = NULL;
    Fila* inicio = NULL;


    cout << "Digite um numero: " ;
    cin >> num;


    for (i=2; i < num/2; i++){
        if(num%i == 0){
            topo =P.InserirPilha(topo,i);
            fim = F.InserirFila(fim,i);
            if (inicio == NULL)
            inicio = fim;

        }
    }

    cout << "\nDivisores em ordem crescente (Fila): ";
    Fila* auxF = inicio;
    while (auxF != NULL) {
        cout << auxF->valor << " ";
        auxF = auxF->elo;
    }

    cout << "\nDivisores em ordem decrescente (Pilha): ";
    Pilha* auxP = topo;
    while (auxP != NULL) {
        cout << auxP->valor << " ";
        auxP = auxP->elo;
    }

    


    return 0;
}
