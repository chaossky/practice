//C++11에서 auto는 어떤 의미인지 생각해보고 코드로 예를 들기.

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
	std::cout << sizeof(test_string) << std::endl;  //28  ->길이에 상관없이 28?
	
	std::cout << sizeof(std::string) << std::endl;  //28
	std::cout << sizeof(maybe) << std::endl;    //28

	std::cout << sizeof(str) << std::endl;    //30
	std::cout << sizeof(str_test) << std::endl;     //4
}

//auto는 자료형을 따로 정해주지않아도 따라할수 있어서 편한 것 같다.

//근데 궁금한 것은 sizeof(std::string)이 길이에 상관없이 28인 것하고
//마지막에 str은 30인데 왜 str_test는 4일까