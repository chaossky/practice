#include <iostream>
#include <string>

int main()
{
	int my_age;
	std::string My_name;

	std::cout << "�̸���: ";
	std::cin >> My_name;
	
	std::cout << "���̴�: ";
	std::cin >> my_age;

	std::cout << "���� �̸��� " << My_name 
		<< "�̰�, " << my_age << "�� �Դϴ�." << std::endl;

	return 0;

}