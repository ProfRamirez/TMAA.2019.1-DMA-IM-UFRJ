#ifndef DATAFRAME_H
#define DATAFRAME_H

#include <iostream>
using namespace std;

class DataFrame
{
    public:
        DataFrame();
        virtual ~DataFrame();

        void read_csv(string) {};
        DataFrame groupby(string) {};
        DataFrame agg( string ) {};
        void print(void) {};

    protected:
    private:
};

#endif // DATAFRAME_H
