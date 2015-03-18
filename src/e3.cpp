/*
 * e3.cpp
 *
 *  Created on: 18 mar 2015
 *      Author: Pawe³
 */

#include "e3.h"

bool is_prime(int n) {


	//int limit = sqrt(n);
	int limit = n;

	for (int i = 2; i < limit; ++i) {
		if (n%i == 0) return false;
	}

	return true;

}

void is_prime_print(int n) {

	std::cout << n
			<< " is prime: "
			<< is_prime(n) << std::endl;
}


void e3() {

	typedef unsigned long big;

	big n = (big) 600851475143;
//	big n = (big) 13195;
	big factor = 2;
	big max_prime_factor = 2;

	std::cout << "Running search for max prime divisor:\n";

	while (n>1) {

		if (n%factor == 0) {

			max_prime_factor= factor;
			n = n/factor;
			while (n%factor == 0) {
				n = n/factor;
			}

		}
		++factor;

	}
	std::cout << "max prime factor: " << max_prime_factor << std::endl;

}


