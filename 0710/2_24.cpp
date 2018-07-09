#include <iostream>

int Arithmetic(int a0, int d, int n) {//초항 등차 몇 번째
	//if n == 3
	//return ((a0) +d) +d)

	//기본파트 + 재귀파트
	if (n <= 1)
		return a0;
	else
		return Arithmetic(a0, d, n - 1) + d;
}

int main() {
	std::cout << "arithmetic(1, 2, 5) : " << Arithmetic(1, 2, 5) << std::endl;
}