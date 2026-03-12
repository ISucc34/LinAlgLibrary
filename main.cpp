#include <iostream>
#include "linAlg.h"

int main(){

    mat a(2,3);
    a.fill(2);

    a*2;
    a.print();



    return 0;
}