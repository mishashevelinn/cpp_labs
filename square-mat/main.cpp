#include<iostream>
using namespace std;
#include<string>
#include "SquareMat.h"


int main() {
    SquareMat** test = new SquareMat*[5];

    for (int i = 0; i < 5; i++) {
        srand(time(NULL));
        test[i] = new SquareMat(4);

    }
    for (int i = 0; i < 5; i++)
    {
        test[i]->print();
    }

}
