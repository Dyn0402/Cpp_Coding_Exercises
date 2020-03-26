/*
 * CalledClass.cpp
 *
 *  Created on: Mar 25, 2020
 *      Author: Dylan Neff
 */



#include "CalledClass.h"


// Structors

CalledClass::CalledClass() {
	f = bind(&CalledClass::f1, this);
}


CalledClass::~CalledClass() {
	// Nothing
}


// Getters

int CalledClass::get_par_a() {
	return(pars.a);
}

int CalledClass::get_par_b() {
	return(pars.b);
}


// Setters

void CalledClass::set_f(int num) {
	if(num == 1) {
		f = bind(&CalledClass::f1, this);
	} else if(num == 2) {
		f = bind(&CalledClass::f2, this);
	}
}

void CalledClass::set_par_a(int a) {
	pars.a = a;
}

void CalledClass::set_par_b(int b) {
	pars.b = b;
}


// Doers

vector<double> CalledClass::f1() {
	vector<double> vec(5, pars.a);
	return(vec);
}

vector<double> CalledClass::f2() {
	vector<double> vec(3, pars.b);
	return(vec);
}



