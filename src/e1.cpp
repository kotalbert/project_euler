/*
 * e1.cpp
 *
 *  Created on: 17 mar 2015
 *      Author: PD14184
 */

#include "e1.h"

int sum_div_by(int n) {

	int target = 999;
	int p = 0;

	p = target / n;

	return n*(p*(p+1)) / 2 ;


}

void e1() {


	int sum = 0;

	sum = sum_div_by(3)
			+ sum_div_by(5)
			- sum_div_by(15);

	std::cout << sum;


}
