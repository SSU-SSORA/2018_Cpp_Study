#include <iostream>
#include <cstring>// c��������� c++�����Ϸ��� �°� ����ȭ �� �������
#include <string.h> //c������ �ִ� �������
#include <string>//c++ std::string Ŭ���� ���� �������
using namespace std;

int main() {
	char str[20];
	cin >> str; //<< "apple"
	//a p p l e \0
	//�ƽ�Ű�ڵ� 0
	//NULL����
	//str[5] = 'a';
	
	//C style
	if (!strcmp(str, "apple")) {
		cout << str << "�� " << "apple�� �����ϴ�!\n";
	}

	//C++ style
	std::string str2 = str;
	if (str2 == "apple") {
		cout << str << "�� " << "apple�� �����ϴ�!\n";
	}
}