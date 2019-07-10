/*
#-----------------------------------------------------------
# UFRJ - Universidade Federal do Rio de Janeiro
# IM   - Instituto de Matemática
# DMA  - Departamento de Matemática Aplicada
#
#        TMAA - Top. Mat. Aplicada A - Programação I
#
# ED04 - Perfil do Eleitorado 2018
#        Head do Modulo "Funcao de Agregacao"
#
# Autor: Prof. Milton R. Ramirez (milton@labma.ufrj.br)
# Criação: 07 de julho de 2019
#
# Data de entrega: 14 de julho de 2018
#-----------------------------------------------------------
*/
#ifndef FUNCAOAGREGACAO_SOMA_H
#define FUNCAOAGREGACAO_SOMA_H


class FuncaoAgregacao_SOMA // Functor para a função de agregação equivalente ao SUM
{
    public:
        FuncaoAgregacao_SOMA() { soma_resultado = 0; };
        virtual ~FuncaoAgregacao_SOMA();

        void operator ()(int parcela) { soma_resultado += parcela; }
        int get_soma_resultado(void) { return soma_resultado; }
    protected:
    private:
        int soma_resultado;
};

#endif // FUNCAOAGREGACAO_SOMA_H
