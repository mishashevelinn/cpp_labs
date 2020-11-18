//
// Created by misha on 18/11/2020.
//


#include <iostream>
#include "SquareMat.h"

SquareMat::SquareMat(unsigned int ndim) : ndim(ndim), data(new int*[ndim]) {
    //srand(time(NULL));
    for (int i = 0; i < ndim; i++) {
        data[i] = new int[ndim];
        for (int j = 0; j < ndim; j++) {

            data[i][j] =  rand()%(201) - 100;
        }
    }
}
SquareMat::SquareMat(const SquareMat &other) { ndim = other.ndim; data = other.data; cout << "Ouch" << endl;}

SquareMat::~SquareMat() {
    for (int i = 0; i < ndim; i++) {
        delete [] data[i];
    }
    delete[] data;
}

unsigned int SquareMat::size() const {
    return ndim;
}

double SquareMat::at(unsigned int i, unsigned int j) const {
    return data[i][j];
}

void SquareMat::print() const {
    for (int i = 0; i < ndim; i++) {
        for (int j = 0; j < ndim; j++) {
            cout <<" "<<data[i][j];
            }cout << endl;
        }
    }
/*True if first argument's elements sum is less that seconds*/
bool SquareMat::mat_cmp(SquareMat& mat1, SquareMat& mat2)  {
    double sum1 = 0;
    double sum2 = 0;
    for (int i = 0; i < mat1.size(); i++) {
        for (int j = 0; j < mat2.size(); j++) {
            sum1+=mat1.data[i][j];
            sum2+=mat2.data[i][j];
        }
    }
    return sum1 < sum1;
}





