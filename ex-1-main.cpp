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

int main() {
	std::cout << nth_prime(367, 186, 151) << std::endl;
	std::cout << nth_prime(179, 10, 203) << std::endl;
	std::cout << nth_prime(271, 37, 39) << std::endl;
	std::cout << nth_prime(103, 230, 1) << std::endl;
	std::cout << nth_prime(27, 104, 185) << std::endl;
	std::cout << nth_prime(253, 50, 85) << std::endl;
	std::cout << nth_prime(1, 1, 1) << std::endl;
	std::cout << nth_prime(9075, 337, 210) << std::endl;
	std::cout << nth_prime(307, 24, 79) << std::endl;
	std::cout << nth_prime(331, 221, 177) << std::endl;
	std::cout << nth_prime(259, 170, 40) << std::endl;
	std::cout << nth_prime(269, 58, 102) << std::endl;
	return 0;
}
