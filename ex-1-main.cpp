#include<iostream>

#define CPP2_PRIME_UPPER_LIMIT 1000000

int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
	unsigned int Num;
	for (unsigned int i = 0; i <= n; i++) {
		//“™·”—ñ
		Num = a + d*i;

		//‘f””»’è
		if (Num < 2) {
			n = n + 1;
		}
		else if (Num == 2) {
			n = n + 1;
		}
		else if (Num % 2 == 0) {
			n = n + 1;
		}
		//‘f”ˆá‚¤

		else {
			double sqrtNum = sqrt(Num);
			for (int j = 3; j <= sqrtNum; j += 2) {
				if (Num%j == 0) {
					//‘f”ˆá‚¤
					n = n + 1;
				}
			}
			//‘f”‚Å‚ ‚é
		}
	}

	return Num;
}


