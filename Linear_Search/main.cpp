#include <iostream>
#include <stdio.h>

// ���`�T��
void Linear_Search1(int searchVelue)
{
	// �f�[�^100��
	int data[100];
	int result;

	// �f�[�^�ɐ��l������
	for (int i = 0; i < 100; i++)
	{
		data[i] = i;
	}

	// �z��̐擪���珇�ɒ��ׂ�
	for (int i = 0; i < sizeof(data) / sizeof(int); i++)
	{
		std::cout << data[i] << std::endl;

		if (searchVelue == data[i])
		{
			result = data[i];
			std::cout << result << "�𔭌����܂����B" << std::endl;
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