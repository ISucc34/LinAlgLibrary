#include <iostream>
#include "linAlg.h"

int main(){

    mat a(2,3);
    a.fill(2);


    a*2;
    a.print();

    cout << endl;

    mat b(2,3);
    b.fill(2);

    b*2;
    b.print();



    return 0;
}