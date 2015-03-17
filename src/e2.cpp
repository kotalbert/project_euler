/*
 * e2.cpp
 *
 *  Created on: 18 mar 2015
 *      Author: Pawe³
 */



#include "e2.h"


void e2() {

	int limit = 4e+6;
	int sum = 0;
	int a=1;
	int b=1;
	int c=a+b;

	while (sum < limit) {

		sum+=c;
		a=b+c;
		b=c+a;
		c=a+b;

	}

	std::cout << sum;


	}


