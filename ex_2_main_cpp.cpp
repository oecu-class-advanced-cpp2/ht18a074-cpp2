// ex_2_main_cpp.cpp
#include <iostream>
#include <string>
#include<algorithm>
#include<sstream>

namespace cpp2 {
	/* --------------------------------------------------------------------- */
	/*
	mcxi

	mcxi �L�@����͂���N���X�ł��B
	*/
	/* --------------------------------------------------------------------- */
	class mcxi {
	public:
		/* ----------------------------------------------------------------- */
		/*
		mcxi

		�w�肳�ꂽ���������͂��āA�I�u�W�F�N�g�����������܂��B
		�ȉ��̏ꍇ�ɂ͗�O���n�o����܂��B

		1. [2-9,m,c,x,i] �ȊO�̕������o�������ꍇ
		2. 2 ���������Đ��� (2-9) ���o�������ꍇ
		3. m, c, x, i �����̏����ŏo�����Ȃ������ꍇ
		�������A�Ⴆ�� mx �̂悤�ɁA����̕������X�L�b�v���鎖�͋��e
		����܂��B
		*/
		/* ----------------------------------------------------------------- */
		mcxi(const std::string& s) : value_(0) {
			int disit = 0;
			for (auto pos = s.begin(); pos != s.end(); ++pos) {
				if (*pos>='2'&&*pos<='9') {
					disit += *pos-'0';
				}
				else {
					auto u = unit(*pos);
					value_ += std::max(disit, 1)*u;
					disit = 0;
				}
			}
		}

		/* ----------------------------------------------------------------- */
		/*
		operator+

		2 �̃I�u�W�F�N�g�̉��Z���ʂ��擾���܂��B
		*/
		/* ----------------------------------------------------------------- */
		mcxi operator+(const mcxi& rhs) {
			mcxi dest(*this);
			dest.value_ += rhs.value_;
			return dest;
		}

		/* ----------------------------------------------------------------- */
		/*
		to_string

		���݂̒l�� mcxi �L�@�ɕϊ����܂��B
		*/
		/* ----------------------------------------------------------------- */
		std::string to_string() const {
			std::stringstream ss;

			int m = value_ / 1000;
			if (m == 1) {
				ss << 'm';
			}
			if (m > 1) {
				ss << m;
				ss << 'm';
			}

			int c = (value_ - m * 1000) / 100;
			if (c == 1) {
				ss << 'c';
			}
			if (c > 1) {
				ss << c;
				ss << 'c';
			}

			int x = (value_ - m * 1000 - c * 100) / 10;
			if (x == 1) {
				ss << 'x';
			}
			if (x > 1) {
				ss << x;
				ss << 'x';
			}

			int i = (value_ - m * 1000 - c * 100 - x * 10);
			if (i == 1) {
				ss << 'i';
			}
			if (i > 1) {
				ss << i;
				ss << 'i';
			}
			return ss.str();
		}

	private:
		int unit(char c) {
			switch (c) {
			case 'm':
				return 1000;
			case 'c':
				return 100;
			case 'x':
				return 10;
			case 'i':
				return 1;
			default:
				return 1;
			}
		}

	private:
		int value_;
	};
}

int main() {
	cpp2::mcxi a0("xi");
	cpp2::mcxi b0("x9i");
	auto result0 = a0 + b0;
	std::cout << "3x" << " " << result0.to_string() << std::endl;

	cpp2::mcxi a1("i");
	cpp2::mcxi b1("9i");
	auto result1 = a1 + b1;
	std::cout << "x" << " " << result1.to_string() << std::endl;

	cpp2::mcxi a2("c2x2i");
	cpp2::mcxi b2("4c8x8i");
	auto result2 = a2 + b2;
	std::cout << "6cx" << " " << result2.to_string() << std::endl;

	cpp2::mcxi a3("m2ci");
	cpp2::mcxi b3("4m7c9x8i");
	auto result3 = a3 + b3;
	std::cout << "5m9c9x9i" << " " << result3.to_string() << std::endl;

	cpp2::mcxi a4("9c9x9i");
	cpp2::mcxi b4("i");
	auto result4 = a4 + b4;
	std::cout << "m" << " " << result4.to_string() << std::endl;

	cpp2::mcxi a5("i");
	cpp2::mcxi b5("9m9c9x8i");
	auto result5 = a5 + b5;
	std::cout << "9m9c9x9i" << " " << result5.to_string() << std::endl;

	cpp2::mcxi a6("m");
	cpp2::mcxi b6("i");
	auto result6 = a6 + b6;
	std::cout << "mi" << " " << result6.to_string() << std::endl;

	cpp2::mcxi a7("i");
	cpp2::mcxi b7("m");
	auto result7 = a7 + b7;
	std::cout << "mi" << " " << result7.to_string() << std::endl;

	cpp2::mcxi a8("m9i");
	cpp2::mcxi b8("i");
	auto result8 = a8 + b8;
	std::cout << "mx" << " " << result8.to_string() << std::endl;

	cpp2::mcxi a9("9m8c7xi");
	cpp2::mcxi b9("c2x8i");
	auto result9 = a9 + b9;
	std::cout << "9m9c9x9i" << " " << result9.to_string() << std::endl;

	std::cin.get();
}