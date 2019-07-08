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
        void print(void) {};

    protected:
    private:
};

#endif // DATAFRAME_H
