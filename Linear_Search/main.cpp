#include <iostream>
#include <vector>
#include <stdio.h>
#include <time.h>

// ���`�T��
void Linear_Search1(int searchVelue)
{
	// �����p
	int data[100];
	// �����p
	std::vector<int> rdata(100, 0);
	// ����
	int result;

	// �����p�f�[�^�ɐ��l������
	for (int i = 0; i < 100; i++)
	{
		rdata[i] = i;
	}

	// �����p�f�[�^�ɗ���������

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
		std::cout << i + 1 << " : " << data[i] << std::endl;
	}

	// �z��̐擪���珇�ɒ��ׂ�
	for (i = 0; i < sizeof(data) / sizeof(int); i++)
	{
		if (searchVelue == data[i])
		{
			result = data[i];
			std::cout << i + 1 << "�Ԗڂ�" << result << "�𔭌����܂����B" << std::endl;
			break;
		}
		else if (i >= sizeof(data) / sizeof(int) - 1)
		{
			std::cout << "�������܂���ł���" << std::endl;
			break;
		}
	}
}

int main(void)
{
	// �������鐔�l
	int	searchVelue = 0;

	// �������鐔�l�̓���
	std::cout << "�T���l����͂��Ă��������B" << std::endl;
	std::cin >> searchVelue;
	std::cout << searchVelue << "��T���܂��B" << std::endl;

	// ���`�T��
	Linear_Search1(searchVelue);

	return 0;
}