#include <iostream>
#include <stdio.h>

// 線形探索
void Linear_Search1(int searchVelue)
{
	// データ100個
	int data[100];
	int result;

	// データに数値を入れる
	for (int i = 0; i < 100; i++)
	{
		data[i] = i;
	}

	// 配列の先頭から順に調べる
	for (int i = 0; i < sizeof(data) / sizeof(int); i++)
	{
		std::cout << data[i] << std::endl;

		if (searchVelue == data[i])
		{
			result = data[i];
			std::cout << result << "を発見しました。" << std::endl;
			break;
		}
		else if (i >= sizeof(data) / sizeof(int) - 1)
		{
			std::cout << "見つけられませんでした" << std::endl;
			break;
		}
	}
}

int main(void)
{
	// 検索する数値
	int	searchVelue = 0;

	// 検索する数値の入力
	std::cout << "探す値を入力してください。" << std::endl;
	std::cin >> searchVelue;
	std::cout << searchVelue << "を探します。" << std::endl;

	// 線形探索
	Linear_Search1(searchVelue);

	return 0;
}