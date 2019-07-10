/*
#-----------------------------------------------------------
# UFRJ - Universidade Federal do Rio de Janeiro
# IM   - Instituto de Matemática
# DMA  - Departamento de Matemática Aplicada
#
#        TMAA - Top. Mat. Aplicada A - Programação I
#
# ED04 - Perfil do Eleitorado 2018
#        Corpo do Modulo DataFrame
#
# Autor: Prof. Milton R. Ramirez (milton@labma.ufrj.br)
# Criação: 07 de julho de 2019
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
    // Importa o conteúdo de um arquivo CSV para um DataFrame,
    // com nome das colunas dada na 1a linha do arquivo
}

DataFrame DataFrame::groupby(string)
{
    // Gera um novo data frame
}
DataFrame DataFrame::agg(string, FuncaoAgregacao );
void DataFrame::Grafico(void);
