#include <iostream>

// �Q���T��
void Binary_Search1(int searchVelue)
{
	// �f�[�^100��
	int data[100];

	// �f�[�^�ɐ��l������
	for (int i = 0; i < 100; i++)
	{
		data[i] = i;
	}

	// �E�͗v�f���A���͂O
	int right = sizeof(data) / sizeof(int);
	int left = 0;

	while (left < right)
	{
		int mid = (left + right) / 2;

		if (searchVelue == data[mid])
		{
			std::cout << data[mid] << "�𔭌����܂����B" << std::endl;
			break;
		}
		// ���S�����l���傫����ΉE��
		else if (searchVelue > data[mid])
		{
			std::cout << data[mid] << "���傫��" << std::endl;
			left = mid + 1;

			if (mid >= sizeof(data) / sizeof(int) - 1)
			{
				std::cout << sizeof(data) / sizeof(int) << "���傫�����ߌ�����܂���ł���" << std::endl;
				break;
			}
		}
		// ���S�����l����������΂΍���
		else if (searchVelue < data[mid])
		{
			std::cout << data[mid] << "��菬����" << std::endl;
			right = mid;

			if (mid <= 0)
			{
				std::cout << 0 << "��菬�������ߌ�����܂���ł���" << std::endl;
				break;
			}
		}
	}
}

int main(void)
{
	// �������鐔�l
	int	searchVelue = 0;

	// ��������l�̓���
	std::cout << "�T���l����͂��Ă��������B" << std::endl;
	std::cin >> searchVelue;
	std::cout << searchVelue << "��T���܂��B" << std::endl;

	//�Q���T��
	Binary_Search1(searchVelue);

	return 0;
}