/*
 * Main_Class.h
 *
 *  Created on: Mar 25, 2020
 *      Author: Dylan Neff
 */

#ifndef MAINCLASS_H_
#define MAINCLASS_H_


#include <iostream>

#include "CalledClass.h"


class MainClass {
public:
	// Structors
	MainClass();
	~MainClass();

	// Doers
	void call_f();

	// Attributes
	CalledClass called;

private:
	//
};



#endif /* MAINCLASS_H_ */
