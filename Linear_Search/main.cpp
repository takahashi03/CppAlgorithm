#include <iostream>
#include <vector>
#include <stdio.h>
#include <time.h>

// 線形探索
void Linear_Search1(int searchVelue)
{
	// 検索用
	int data[100];
	// 乱数用
	std::vector<int> rdata(100, 0);
	// 結果
	int result;

	// 乱数用データに数値を入れる
	for (int i = 0; i < 100; i++)
	{
		rdata[i] = i;
	}

	// 検索用データに乱数を入れる

	int i = 0;
	while (rdata.size() > 0)
	{
		// 乱数
		srand(time(NULL));
		int r = rand() % (rdata.size());

		data[i] = rdata[r];

		rdata.erase(rdata.begin() + r);
		i++;
	}

	// データ順の表示
	std::cout << "データ順" << std::endl;
	for (i = 0; i < sizeof(data) / sizeof(int); i++)
	{
		std::cout << i + 1 << " : " << data[i] << std::endl;
	}

	// 配列の先頭から順に調べる
	for (i = 0; i < sizeof(data) / sizeof(int); i++)
	{
		if (searchVelue == data[i])
		{
			result = data[i];
			std::cout << i + 1 << "番目に" << result << "を発見しました。" << std::endl;
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