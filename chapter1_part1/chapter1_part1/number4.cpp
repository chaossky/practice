//int�� ���� ���� ������ �Ű������� �ް� �� ������ ���� ��ȯ�ϴ� �Լ��� �ۼ��Ͻÿ�
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