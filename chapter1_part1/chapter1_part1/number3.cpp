//char[12]�迭 �޸𸮸� new �����ڷ� ���� �Ҵ��ϰ� �����ϴ� �ڵ� ���� �ۼ��Ͻÿ�.
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