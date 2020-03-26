/*
 * CalledClass.h
 *
 *  Created on: Mar 25, 2020
 *      Author: Dylan Neff
 */

#ifndef CALLEDCLASS_H_
#define CALLEDCLASS_H_


#include <vector>
#include <functional>

using namespace std;


struct CalledClassPars {
	int a = 5;
	int b = 10;
	string c = "hello";
};


class CalledClass {
public:
	// Structors
	CalledClass();
	~CalledClass();

	// Getters
	int get_par_a();
	int get_par_b();

	// Setters
	void set_f(int num);
	void set_par_a(int a);
	void set_par_b(int b);

	// Doers
	function<vector<double>(void)> f;

private:
	// Attributes
	CalledClassPars pars;

	// Doers
	vector<double> f1();
	vector<double> f2();
};


#endif /* CALLEDCLASS_H_ */
