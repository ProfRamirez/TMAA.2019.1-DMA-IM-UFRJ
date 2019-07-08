/*
#-----------------------------------------------------------
# UFRJ - Universidade Federal do Rio de Janeiro
# IM   - Instituto de Matem�tica
# DMA  - Departamento de Matem�tica Aplicada
#
#        TMAA - Top. Mat. Aplicada A - Programa��o I
#
# ED04 - Programa BASE: Explora��o da Base de Eleitores 2018
#
# Autor: Prof. Milton R. Ramirez (milton@labma.ufrj.br)
# Cria��o: 07 de julho de 2019
#-----------------------------------------------------------
*/
#include <iostream>
#include "DataFrame.h"
#include "FuncaoAgregacao_SOMA.h"

#include <vector>

using namespace std;

int main()
{
    DataFrame eleitores, eleitores_por_UF;
    FuncaoAgregacao_SOMA sum;

    cout << "TMAA.2019.1 (ED04): Explora��o da Base de Eleitores 2018 " << endl;
    cout << "(c) Prof. Milton R. Ramirez - (milton@matematica.ufrj.br) : DMA-IM/UFRJ\n" << endl;

    eleitores.read_csv("teste");
    eleitores_por_UF = eleitores.groupby("UF").agg("QNT_ELEITORES", sum );
    eleitores_por_UF.print();

    return 0;
}
