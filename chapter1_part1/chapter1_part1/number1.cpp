#include <iostream>
#include <string>

int main()
{
	int my_age;
	std::string My_name;

	std::cout << "이름은: ";
	std::cin >> My_name;
	
	std::cout << "나이는: ";
	std::cin >> my_age;

	std::cout << "나의 이름은 " << My_name 
		<< "이고, " << my_age << "살 입니다." << std::endl;

	return 0;

}