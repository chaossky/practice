//������� for���� �̿��Ͽ� int �迭�� ������������ �����Ͽ� ȭ�鿡 ����ϱ�.
#include <iostream>

void Swap(int &a, int &b)
{
	int temp(0);
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int aList[5] = { 20,30,10,50,40 };
	int count = 0;

	for (int i = 0; i < 4; i++)
	{
		Swap(aList[0], aList[i]);

		for (int j = 0; j < 4; j++)
		{
			if (aList[j] > aList[j + 1])
			{
				Swap(aList[j], aList[j + 1]);
				count++;
			}
		}
		if (count == 0)
			break;

		count = 0;
	}

	for (auto n : aList)
		std::cout << n << std::endl;
}