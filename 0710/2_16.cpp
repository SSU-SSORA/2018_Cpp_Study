#include <iostream>

int gcd(int a, int b)
{
	int c;
	while (b)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main() {
	std::cout << "gcd(13, 17) : " << gcd(13, 17) << std::endl;
}