#include <iostream>
#include <cstring>// c헤더파일을 c++컴파일러에 맞게 최적화 한 헤더파일
#include <string.h> //c언어부터 있던 헤더파일
#include <string>//c++ std::string 클래스 관련 헤더파일
using namespace std;

int main() {
	char str[20];
	cin >> str; //<< "apple"
	//a p p l e \0
	//아스키코드 0
	//NULL문자
	//str[5] = 'a';
	
	//C style
	if (!strcmp(str, "apple")) {
		cout << str << "과 " << "apple이 같습니다!\n";
	}

	//C++ style
	std::string str2 = str;
	if (str2 == "apple") {
		cout << str << "과 " << "apple이 같습니다!\n";
	}
}