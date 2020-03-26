/*
 * main.cpp
 *
 *  Created on: Jun 8, 2019
 *      Author: Dylan Neff
 */


#include <iostream>

#include "MainClass.h"

using namespace std;


int main() {

	MainClass runner;

	runner.called.set_par_a(7);
	runner.call_f();

	cout << endl << endl;

	runner.called.set_par_b(9);
	runner.called.set_f(2);
	runner.call_f();

	cout << endl << endl;

	cout << "donzo" << endl;

	return(0);
}

