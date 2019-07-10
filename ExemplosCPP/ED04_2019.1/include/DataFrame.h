/*
#-----------------------------------------------------------
# UFRJ - Universidade Federal do Rio de Janeiro
# IM   - Instituto de Matemática
# DMA  - Departamento de Matemática Aplicada
#
#        TMAA - Top. Mat. Aplicada A - Programação I
#
# ED04 - Perfil do Eleitorado 2018
#        Head do Modulo DataFrame
#
# Autor: Prof. Milton R. Ramirez (milton@labma.ufrj.br)
# Criação: 07 de julho de 2019
#
# Data de entrega: 14 de julho de 2018
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

        void read_csv(string);
        DataFrame groupby(string);
        DataFrame agg(string, FuncaoAgregacao );
        void Grafico(void);

    protected:
    private:
};

#endif // DATAFRAME_H
