/*
#-----------------------------------------------------------
# UFRJ - Universidade Federal do Rio de Janeiro
# IM   - Instituto de Matem�tica
# DMA  - Departamento de Matem�tica Aplicada
#
#        TMAA - Top. Mat. Aplicada A - Programa��o I
#
# ED04 - Perfil do Eleitorado 2018
#        Corpo do Modulo DataFrame
#
# Autor: Prof. Milton R. Ramirez (milton@labma.ufrj.br)
# Cria��o: 07 de julho de 2019
#
# Data de entrega: 14 de julho de 2018
#-----------------------------------------------------------
*/

#include "DataFrame.h"
#include <iostream>
using namespace std;

DataFrame::DataFrame()
{
    //ctor
}

DataFrame::~DataFrame()
{
    //dtor
}

void DataFrame::read_csv(string)
{
    // Importa o conte�do de um arquivo CSV para um DataFrame,
    // com nome das colunas dada na 1a linha do arquivo
}

DataFrame DataFrame::groupby(string)
{
    // Gera um novo data frame
}
DataFrame DataFrame::agg(string, FuncaoAgregacao );
void DataFrame::Grafico(void);
