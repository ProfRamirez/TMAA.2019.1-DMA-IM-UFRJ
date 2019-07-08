#ifndef FUNCAOAGREGACAO_SOMA_H
#define FUNCAOAGREGACAO_SOMA_H


class FuncaoAgregacao_SOMA
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
