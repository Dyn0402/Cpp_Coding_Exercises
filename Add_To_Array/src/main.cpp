/*
 * main.cpp
 *
 *  Created on: Jun 8, 2019
 *      Author: Dylan Neff
 */


#include <iostream>

using namespace std;

void add(int *A, int size, int left, int right, int x);


int main() {
	const int array_size = 6;
	int A[array_size] = {1, 1, 1, 4, 5, 6};

	add(A, array_size, 1, 5, 2);
	add(A, array_size, 2, 3, 10);

	for(int i=0; i<array_size; i++) {
		cout << A[i] << " " << flush;
	}
	cout << endl;

	cout << "donzo" << endl;

	return(0);
}


void add(int *A, int size, int left, int right, int x) {
	if(left <= right && left > 0 && right <= size) {
		for(int i = left; i <= right; i++) {
			A[i-1] += x;
		}
	} else {
		cout << "Add ranges out of bounds" << endl;
	}
}
