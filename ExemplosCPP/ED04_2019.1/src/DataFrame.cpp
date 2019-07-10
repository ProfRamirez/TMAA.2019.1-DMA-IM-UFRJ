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

void DataFrame::groupby(string campo)
{
    // Ordenacao das linhas do DataFrame, segundo o "campo"
    // para aplicacao de funcao de agregacao
}

DataFrame DataFrame::agg(string campo, FuncaoAgregacao_SOMA fg )
{
    // Gera um novo DataFrame com as categorias apuradas pelo "groupby" seguida do resultado
    // da aplicacao da Funcao de Agregacao ao "campo" das linhas do grupo
}

void DataFrame::Grafico(void)
{
    //Gera um grafico de barras com os dado da DataFrame
}
