#include <iostream>
#include <vector>
#include <stdio.h>
#include <time.h>

// �o�u���\�[�g
void BubbleSort(int list[])
{

}

int main(void)
{
	// �\�[�g�p
	int data[10];
	// �����p
	std::vector<int> rdata(10, 0);

	// �����p�f�[�^�ɐ��l������
	for (int i = 0; i < 10; i++)
	{
		rdata[i] = i;
	}

	// �\�[�g�p�f�[�^�ɗ���������
	int i = 0;
	while (rdata.size() > 0)
	{
		// ����
		srand(time(NULL));
		int r = rand() % (rdata.size());

		data[i] = rdata[r];

		rdata.erase(rdata.begin() + r);
		i++;
	}
	// �f�[�^���̕\��
	std::cout << "�f�[�^��" << std::endl;
	for (i = 0; i < sizeof(data) / sizeof(int); i++)
	{
		std::cout << data[i];
	}

	BubbleSort(data);

	return 0;
}