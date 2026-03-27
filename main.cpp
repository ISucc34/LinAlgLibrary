#include <iostream>
#include <exception>
#include "linAlg.h"

int main(){

    mat a(3,2);
    a.fill(2);


    a*2;
    a.print();

    cout << endl;

    mat b(2,3);
    b.fill(2);

    b*2;
    b.print();
    cout << endl;

    mat c;
    c = a*b;

    c.print();


    cout << endl;
    a.print();
    a.transpose();
    a.print();

    return 0;
}