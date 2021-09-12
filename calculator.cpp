//============================================================================
// Name        : calculator.cpp
// Author      : multiple
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

float num1,num2,result=0;


int main() {
	char optr;
	cout<< "enter math operator (+ - * /)";
	cin>> optr;

	switch (optr){

	case '+': sum();break;
	case '-': sub();break;
	case '*': mul();break;
	case '/': div();break;



	default : cout<< "accept only (+ - * /)";
	}
}
