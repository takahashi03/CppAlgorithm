#include <iostream>

// ２分探索
void Binary_Search1(int searchVelue)
{
	// データ100個
	int data[100];

	// データに数値を入れる
	for (int i = 0; i < 100; i++)
	{
		data[i] = i;
	}

	// 右は要素数、左は０
	int right = sizeof(data) / sizeof(int);
	int left = 0;

	while (left < right)
	{
		int mid = (left + right) / 2;

		if (searchVelue == data[mid])
		{
			std::cout << data[mid] << "を発見しました。" << std::endl;
			break;
		}
		// 中心よりも値が大きければ右へ
		else if (searchVelue > data[mid])
		{
			std::cout << data[mid] << "より大きい" << std::endl;
			left = mid + 1;

			if (mid >= sizeof(data) / sizeof(int) - 1)
			{
				std::cout << sizeof(data) / sizeof(int) << "より大きいため見つかりませんでした" << std::endl;
				break;
			}
		}
		// 中心よりも値が小さければば左へ
		else if (searchVelue < data[mid])
		{
			std::cout << data[mid] << "より小さい" << std::endl;
			right = mid;

			if (mid <= 0)
			{
				std::cout << 0 << "より小さいため見つかりませんでした" << std::endl;
				break;
			}
		}
	}
}

int main(void)
{
	// 検索する数値
	int	searchVelue = 0;

	// 検索する値の入力
	std::cout << "探す値を入力してください。" << std::endl;
	std::cin >> searchVelue;
	std::cout << searchVelue << "を探します。" << std::endl;

	//２分探索
	Binary_Search1(searchVelue);

	return 0;
}