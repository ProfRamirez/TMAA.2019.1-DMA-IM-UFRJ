/*
#-----------------------------------------------------------
# UFRJ - Universidade Federal do Rio de Janeiro
# IM   - Instituto de Matemática
# DMA  - Departamento de Matemática Aplicada
#
#        TMAA - Top. Mat. Aplicada A - Programação I
#
# ED04 - Programa BASE: Exploração da Base de Eleitores 2018
#
# Autor: Prof. Milton R. Ramirez (milton@labma.ufrj.br)
# Criação: 07 de julho de 2019
#-----------------------------------------------------------
*/
#include <iostream>
#include "DataFrame.h"
#include "FuncaoAgregacao_SOMA.h"

#include <vector>

using namespace std;

void Soma( vector<int> v, FuncaoAgregacao_SOMA & sum)
{
    for( auto elemento : v)
    {
        sum(elemento);
    }
}

int main()
{
    DataFrame eleitores, eleitores_por_UF;
    vector<int> v = { 1,2,3,4,5,6};
    FuncaoAgregacao_SOMA sum;

    cout << "TMAA.2019.1 (ED04): Exploração da Base de Eleitores 2018 " << endl;
    cout << "(c) Prof. Milton R. Ramirez - (milton@matematica.ufrj.br) : DMA-IM/UFRJ\n" << endl;

    eleitores.read_csv("teste");
    eleitores_por_UF = eleitores.groupby("UF").agg("QNT_ELEITORES", sum );
    eleitores_por_UF.print();

    Soma( v, sum );
    cout << sum.get_soma_resultado();

    return 0;
}
