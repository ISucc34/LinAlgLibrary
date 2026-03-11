#include <iostream>
#include "linAlg.h"

int main(){

    mat a(2, 2);
    a = eye(2);
    
    a.print();



    return 0;
}