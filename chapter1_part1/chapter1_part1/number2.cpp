//C++11���� auto�� � �ǹ����� �����غ��� �ڵ�� ���� ���.

#include <iostream>
#include <string>

int main()
{
	int a(10);
	int b(10);
	auto c(a);
	//auto c(A);
	auto d(1);
	auto e('A');
	auto f(3.5);

	char str[30] = {'a','b','c','d','e','f','g'};
	auto str_test(str);

	std::string test_string = {"ffffffffffffffffffff"};
	auto maybe(test_string);

	std::cout << sizeof(c) << std::endl;   // 4
	std::cout << sizeof(d) << std::endl;   // 4
	std::cout << sizeof(e) << std::endl;   // 1
	std::cout << sizeof(f) << std::endl;   // 8
	std::cout << sizeof(test_string) << std::endl;  //28  ->���̿� ������� 28?
	
	std::cout << sizeof(std::string) << std::endl;  //28
	std::cout << sizeof(maybe) << std::endl;    //28

	std::cout << sizeof(str) << std::endl;    //30
	std::cout << sizeof(str_test) << std::endl;     //4
}

//auto�� �ڷ����� ���� ���������ʾƵ� �����Ҽ� �־ ���� �� ����.

//�ٵ� �ñ��� ���� sizeof(std::string)�� ���̿� ������� 28�� ���ϰ�
//�������� str�� 30�ε� �� str_test�� 4�ϱ�