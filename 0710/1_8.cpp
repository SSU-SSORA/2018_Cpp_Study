#include <iostream>

using namespace std;

#define FOUROP(x, y) cout << "x + y : " << x + y << '\n' << ", x - y : " << x - y	\
	 << "x * y : " << x * y << ", x / y : " << x / y << endl;

inline void FOUROP2(int x, int y) {
	cout << "x + y : " << x + y << '\n' << ", x - y : " << x - y	
		<< "x * y : " << x * y << ", x / y : " << x / y << endl;
}
int main() {
	FOUROP2(3, 4);
}