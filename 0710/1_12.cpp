#include <iostream>
#include <iomanip>

using namespace std;
int main() {
	int a, b, c;
	int ary[3];//0, 1, 2

	for (int i = 0; i < 3; ++i)
		cin >> ary[i];
	printf("C style printf :\n");
	for(int i = 0 ; i < 3; ++i)
		printf("%5d_%5d_%5.2f\n", ary[i], ary[i] * ary[i], ary[i] / 3.0);

	cout << "C++ style cout : \n";
	cout.precision(2);
	for (int i = 0; i < 3; ++i)
		cout << setw(5) << ary[i] << std::setw(5) << ary[i] * ary[i]
			<< setw(5) << ary[i] / 3.0 << endl;
}