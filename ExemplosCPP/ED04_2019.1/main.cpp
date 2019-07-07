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

using namespace std;

class FuncaoDeAgregacao
{
    operator (){};
};

class DataFrame
{
public:
    DataFrame() {};
    void read_csv(string) {};
    DataFrame groupby(string) {};
    DataFrame agg( string, Funcao_de_agregacao ) {};
    void print(void) {};
};

int main()
{
    DataFrame eleitores, eleitores_por_UF;

    cout << "*** TMAA.2019.1: Exploração da Base de Eleitores 2018 - MR2(C)DMA-IM/UFRJ ***\n" << endl;

    eleitores.read_cvs();
    eleitores_por_UF = eleitores.groupby('UF').agg( 'QNT_ELEITORES', soma_agg_function );
    eleitores_por_UF.print();

    return 0;
}
