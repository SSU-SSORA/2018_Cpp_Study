#include <iostream>

int Arithmetic(int a0, int d, int n) {//���� ���� �� ��°
	//if n == 3
	//return ((a0) +d) +d)

	//�⺻��Ʈ + �����Ʈ
	if (n <= 1)
		return a0;
	else
		return Arithmetic(a0, d, n - 1) + d;
}

int main() {
	std::cout << "arithmetic(1, 2, 5) : " << Arithmetic(1, 2, 5) << std::endl;
}