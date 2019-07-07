/*
#-----------------------------------------------------------
# UFRJ - Universidade Federal do Rio de Janeiro
# IM   - Instituto de Matemática
# DMA  - Departamento de Matemática Aplicada
#
#        TMAA - Top. Mat. Aplicada A - Programação I
#
# Semana 02 - Exemplo 01 - Menu de Opcoes
#
# Autor: Prof. Milton R. Ramirez (milton@labma.ufrj.br)
# Criação: 19 de marco de 2019
#-----------------------------------------------------------
*/

using namespace std;

void ImprimeOpcoes(void)
{
    cout << "\n--- Escolha uma das opções abaixo ---" << std::endl;
    cout << "\t1. Soma vetorial        " << std::endl;
    cout << "\t2. Produto por escalar  " << std::endl;
    cout << "\t3. Sair do programa     " << std::endl;

    cout << "\n\tQual a sua opção?     " << std::endl;

}
void Menu(void)  // função "Menu de opcoes"
{
    char opcao;

    do {
        ImprimeOpcoes();
        cin >> opcao;
        switch (opcao)
        {
            case '1' : cout << "Chamando SomaVetorial()" << endl; break;
            case '2' : cout << "Chamando ProdutoPorEscalar()" << endl; break;
            case '3' : cout << "Saindo do programa..." << endl; break;
            default  : cout << "Opção invalida!" << endl
        }
    } while (opcao != '3');
}

int main()
{
    cout << "TMAA.2019.1 (S02E01) : Menu de Opcoes " << endl;
    cout << "(c) Prof. Milton R. Ramirez - (milton@matematica.ufrj.br) : DMA-IM/UFRJ\n" << endl;

    Menu()
    return 0;
}
