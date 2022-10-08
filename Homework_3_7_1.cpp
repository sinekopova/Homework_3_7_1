#include <iostream>

#define MODE 1

#if defined MODE

#if MODE == 1
int add(int a, int b) { return a + b; }
#endif

int main(){

	setlocale(LC_ALL, "Russian");

#if MODE == 0
	std::cout << "������� � ������ ����������" << std::endl;
#elif MODE == 1
	int a, b;
	std::cout << "������� � ������ ������" << std::endl;
	std::cout << "������� ����� 1: ";
	std::cin >> a;
	std::cout << "������� ����� 2: ";
	std::cin >> b;
	std::cout << "��������� ��������:" << add(a,b) << std::endl;
#else
	std::cout << "����������� �����.���������� ������" << std::endl;
#endif // MODE == 0

	return 0;
}
#else
#error Define MODE
#endif // defined MODE
