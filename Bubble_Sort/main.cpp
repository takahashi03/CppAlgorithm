#include <iostream>
#include <vector>
#include <stdio.h>
#include <time.h>

// バブルソート
void BubbleSort(int list[])
{

}

int main(void)
{
	// ソート用
	int data[10];
	// 乱数用
	std::vector<int> rdata(10, 0);

	// 乱数用データに数値を入れる
	for (int i = 0; i < 10; i++)
	{
		rdata[i] = i;
	}

	// ソート用データに乱数を入れる
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
		std::cout << data[i];
	}

	BubbleSort(data);

	return 0;
}