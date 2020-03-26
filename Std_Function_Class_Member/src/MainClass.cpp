/*
 * MainClass.cpp
 *
 *  Created on: Mar 25, 2020
 *      Author: Dylan Neff
 */



#include "MainClass.h"


// Structors

MainClass::MainClass() {
	//
}

MainClass::~MainClass() {
	// Nothing
}


// Doers
void MainClass::call_f() {
	called.set_par_a(1);
	called.set_par_b(2);
	vector<double> vec = called.f();
	for(auto x:vec) { cout << x << endl; }
}
