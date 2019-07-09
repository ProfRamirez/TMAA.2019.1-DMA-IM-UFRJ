/*
#-----------------------------------------------------------
# UFRJ - Universidade Federal do Rio de Janeiro
# IM   - Instituto de Matemática
# DMA  - Departamento de Matemática Aplicada
#
#        TMAA - Top. Mat. Aplicada A - Programação I
#
# ED04 - Modulo DataFrame: Exploração da Base de Eleitores 2018
#
# Autor: Prof. Milton R. Ramirez (milton@labma.ufrj.br)
# Criação: 07 de julho de 2019
#-----------------------------------------------------------
*/

#ifndef DATAFRAME_H
#define DATAFRAME_H
#include "FuncaoAgregacao_SOMA.h"

#include <iostream>
using namespace std;

class DataFrame
{
    public:
        DataFrame();
        virtual ~DataFrame();

        void read_csv(string) {};
        DataFrame groupby(string) { return *this; };
        DataFrame agg( string, FuncaoAgregacao_SOMA ) { return *this; };
        void Grafico(void) {};

    protected:
    private:
};

#endif // DATAFRAME_H
