//char[12]배열 메모리를 new 연산자로 동적 할당하고 해제하는 코드 예를 작성하시오.
#include <iostream>

int main()
{
	char *str = new char[12];
	
	
	for (int i = 0; i < 12; i++)
	{
		str[i] = 'a';
		std::cout << str[i] << std::endl;
	}
	delete[] str;
}