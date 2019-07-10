/*
#-----------------------------------------------------------
# UFRJ - Universidade Federal do Rio de Janeiro
# IM   - Instituto de Matemática
# DMA  - Departamento de Matemática Aplicada
#
#        TMAA - Top. Mat. Aplicada A - Programação I
#
# ED04 - Perfil do Eleitorado 2018
#        Módulo Principal
#
# Autor: Prof. Milton R. Ramirez (milton@labma.ufrj.br)
# Criação: 07 de julho de 2019
#
# Data de entrega: 14 de julho de 2018
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

    cout << "TMAA.2019.1 (ED04): Exploração da Base de Eleitores 2018 " << endl;
    cout << "(c) Prof. Milton R. Ramirez - (milton@matematica.ufrj.br) : DMA-IM/UFRJ\n" << endl;

    eleitores.read_csv("perfil_eleitorado_2018.csv");
    eleitores_por_UF = eleitores.groupby("UF").agg("QNT_ELEITORES", sum );
    eleitores_por_UF.Grafico();

    return 0;
}
