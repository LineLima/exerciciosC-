/* código para controle de estoque simples, é interrompido quando o numero -1 é inserido
no valor de armazem */


#include <iostream>

using namespace std;

const int num_armazem = 3;
const int num_produto = 3;

struct Estoque {
    int quantidade[num_armazem][num_produto];
};

struct Pedido {
    int armazem;
    int produto;
    int quantidade;
};

void lePedido(Pedido* pedido) {
    cout << "Digite o armazem, o produto e sua quantidade: ";
    cin >> pedido->armazem >> pedido->produto >> pedido->quantidade;
}

int main() {
    Estoque estoque;

    estoque.quantidade[0][0] = 150;
    estoque.quantidade[0][1] = 200;
    estoque.quantidade[0][2] = 250;
    estoque.quantidade[1][0] = 150;
    estoque.quantidade[1][1] = 100;
    estoque.quantidade[1][2] = 300;
    estoque.quantidade[2][0] = 250;
    estoque.quantidade[2][1] = 400;
    estoque.quantidade[2][2] = 300;

    Pedido pedido;
    
    do{

    lePedido(&pedido);
    
    if (pedido.armazem == -1){
    	cout << "programa finalizado" << endl;
    	break;
    }

    if (pedido.quantidade <= estoque.quantidade[pedido.armazem][pedido.produto]) {
        cout << "Pedido efetuado" << endl;
        estoque.quantidade[pedido.armazem][pedido.produto] -= pedido.quantidade;
    } else {
        cout << "Quantidade insuficiente" << endl;
    }

    cout << "Quantidade restante do produto " << pedido.produto << " no armazem " << pedido.armazem << " = " << estoque.quantidade[pedido.armazem][pedido.produto] << endl;

    }while(true);    

    return 0;
}

