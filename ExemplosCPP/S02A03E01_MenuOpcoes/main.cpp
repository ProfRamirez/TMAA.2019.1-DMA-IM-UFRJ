/*
#-----------------------------------------------------------
# UFRJ - Universidade Federal do Rio de Janeiro
# IM   - Instituto de Matemática
# DMA  - Departamento de Matemática Aplicada
#
#        TMAA - Top. Mat. Aplicada A - Programação I
#
# Semana02/Aula03: Exemplo01 - Exemplo de Menu de Opcoes
#
# Autor: Prof. Milton R. Ramirez (milton@labma.ufrj.br)
# Criação: 19 de marco de 2019
#-----------------------------------------------------------
*/
#include <iostream>

using namespace std;

void ImprimeOpcoes(void)
{
    cout << "\n--- Escolha uma das opcoes abaixo ---" << endl;
    cout << "\n    1. Soma vetorial        " << endl;
    cout << "    2. Produto por escalar  " << endl;
    cout << "    3. Sair do programa     " << endl;

    cout << "\n    Qual a sua opcao? ";

}
void Menu(void)  // função "Menu de opcoes"
{
    char opcao;

    do {
        ImprimeOpcoes();
        cin >> opcao;
        switch (opcao)
        {
            case '1' : cout << "\n\tChamando SomaVetorial()" << endl; break;
            case '2' : cout << "\n\tChamando ProdutoPorEscalar()" << endl; break;
            case '3' : cout << "\n\tSaindo do programa..." << endl; break;
            default  : cout << "\n\tOpcao invalida!" << endl;
        }
    } while (opcao != '3');
}

int main()
{
    cout << "TMAA.2019.1 (S02A03E01): Exemplo de Menu de Opcoes " << endl;
    cout << "(c) Prof. Milton R. Ramirez - (milton@matematica.ufrj.br) : DMA-IM/UFRJ\n" << endl;

    Menu();
    return 0;
}
