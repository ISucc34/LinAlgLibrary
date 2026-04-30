#include <iostream>
#include <exception>
#include "linAlg.h"

int main(){

    mat a(3,2);
    a.fill(2);

    a=a*2;
	cout << a;

    cout << endl;

    mat b(2,3);
    b.fill(2);

    b=b*2;
	cout << b;

    // mat c;
    // c = a*b;

	// cout << c;

	cout << '\n';
	mat d(3, 3);

	d.random();
	cout << d;
	d.transpose();
	cout << d;

    return 0;
}
