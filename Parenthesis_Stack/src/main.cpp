/*
 * main.cpp
 *
 *  Created on: Jun 8, 2019
 *      Author: Dylan Neff
 */


#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool check_parenthesis(string test);
bool check_close(char last, char ele);
bool check_open(char ele);
void find_test();


int main() {
	string test_case = "{([]{})]";


	if(check_parenthesis(test_case)) {
		cout << "Good string" << endl;
	} else {
		cout << "Bad string" << endl;
	}

	cout << "donzo" << endl;

	return(0);
}


bool check_parenthesis(string test) {
	vector<char> stack;

	bool check = true;

	for(auto ele:test) {
		if(check_open(ele)) {
			stack.push_back(ele);
		} else {
			if(stack.size() == 0) {
				check = false;
			} else {
				check = check_close(stack.back(), ele);
				if(check) {
					stack.pop_back();
				}
			}
		}

		if(!check) {
			break;
		}
	}

	if(stack.size() > 0) {
		check = false;
	}


	return(check);
}


bool check_close(char last, char ele) {
	vector<char> open_chars = {'(', '[', '{'};
	vector<char> close_chars = {')', ']', '}'};

	bool check = true;

	vector<char>::iterator index = find(close_chars.begin(), close_chars.end(), ele);
	if(index == close_chars.end()) {
		check = false;
	} else {
		if(last != open_chars[distance(close_chars.begin(), index)]) {
			check = false;
		}
	}

	return(check);
}


bool check_open(char ele) {
	vector<char> open_chars = {'(', '[', '{'};
	bool check = true;

	if(find(open_chars.begin(), open_chars.end(), ele) == open_chars.end()) {
		check = false;
	}

	return(check);
}



void find_test() {
	vector<char> open_chars = {'(', '[', '{'};

	if(find(open_chars.begin(), open_chars.end(), '{') != open_chars.end()) {
		cout << "in there" << endl;
	} else {
		cout << "not in" << endl;
	}
}
