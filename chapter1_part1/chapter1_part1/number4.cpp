//int에 대한 참조 형식을 매개변수로 받고 두 변수의 값을 교환하는 함수를 작성하시오
#include <iostream>

void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 5;
	int b = 10;

	Swap(a, b);

	std::cout << a << std::endl<< b << std::endl;
}