#include<iostream>

#define CPP2_PRIME_UPPER_LIMIT 1000000

int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
	unsigned int Num;
	for (unsigned int i = 0; i <= n; i++) {
		//��������
		Num = a + d*i;

		//�f������
		if (Num < 2) {
			n = n + 1;
		}
		else if (Num == 2) {
			n = n + 1;
		}
		else if (Num % 2 == 0) {
			n = n + 1;
		}
		//�f���Ⴄ

		else {
			double sqrtNum = sqrt(Num);
			for (int j = 3; j <= sqrtNum; j += 2) {
				if (Num%j == 0) {
					//�f���Ⴄ
					n = n + 1;
				}
			}
			//�f���ł���
		}
	}

	return Num;
}


