//
// Created by misha on 18/11/2020.
//

#ifndef CPP_LABS_SQUAREMAT_H
#define CPP_LABS_SQUAREMAT_H
#include <cstdio>
#include<ctime>
#include <cstdlib>
using namespace std;






class SquareMat {
public:
    SquareMat(unsigned int d);
    SquareMat(const SquareMat& other);
    virtual ~SquareMat();

    unsigned int size() const;

    double at(unsigned int i, unsigned int j) const;

    void print() const;

    static bool mat_cmp(SquareMat&, SquareMat&) ;
private:
    int **data;
    int ndim;
};


#endif //CPP_LABS_SQUAREMAT_H
