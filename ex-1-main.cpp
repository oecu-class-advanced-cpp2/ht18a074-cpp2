#include<iostream>
#include<math.h>

#define CPP2_PRIME_UPPER_LIMIT 1000000

int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
	unsigned int Num;
	unsigned int count=0;
	for (unsigned int i = 0; count < n; i++) {
		//��������
		Num = a + d*i;

		//�f������
		if (Num < 2) {
		    //�f���Ⴄ
		}
		else if (Num == 2) {
		    //�f���Ⴄ
		}
		else if (Num % 2 == 0) {
		    //�f���Ⴄ
		}
		else {
			double sqrtNum = sqrt(Num);
			for (int j = 3; j <= sqrtNum; j += 2) {
				if (Num%j == 0) {
					//�f���Ⴄ
					goto Notsosu;
				}
			}
			//�f���ł���
			count++;
		}
		Notsosu:;
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


