#include <iostream>
#include <vector>

class Solution
{
	public:
		bool canPlaceFlowers(std::vector<int>& flowerbed, int n)
		{
			int	maxn { 0 };
			int	prev { 0 };
			int	next {   };

			for (std::size_t i = 0; i < flowerbed.size(); i++)
			{
				next = (i == flowerbed.size() - 1) ? 0 : flowerbed[i + 1];
				prev = (!prev && !flowerbed[i] && !next) ? maxn++, 1 : flowerbed[i];
			}
			
			return n <= maxn;
    	}
};

int main()
{
	Solution s {};

	std::vector<int> flowerbed { 1, 0, 0, 0, 1 };
	std::cout << "{ 1, 0, 0, 0, 1 }" << "\n";
	int n { 1 };
	std::cout << "n = " << n << "\n";
	std::cout << "expected maxn = " << 1 << "\n";
	std::cout << s.canPlaceFlowers(flowerbed, n) << "\n";
	std::cout << "\n";

	flowerbed = { 1, 0, 0, 0, 1 };
	std::cout << "{ 1, 0, 0, 0, 1 }" << "\n";
	n = 2;
	std::cout << "n = " << n << "\n";
	std::cout << "expected maxn = " << 1 << "\n";
	std::cout << s.canPlaceFlowers(flowerbed, n) << "\n";
	std::cout << "\n";

	flowerbed = { 0, 0, 0, 0, 0 };
	std::cout << "{ 0, 0, 0, 0, 0 }" << "\n";
	n = 0;
	std::cout << "n = " << n << "\n";
	std::cout << "expected maxn = " << 3 << "\n";
	std::cout << s.canPlaceFlowers(flowerbed, n) << "\n";
	std::cout << "\n";

	flowerbed = { 0 };
	std::cout << "{ 0 }" << "\n";
	n = 1;
	std::cout << "n = " << n << "\n";
	std::cout << "expected maxn = " << 1 << "\n";
	std::cout << s.canPlaceFlowers(flowerbed, n) << "\n";
	std::cout << "\n";

	flowerbed = { 1 };
	std::cout << "{ 1 }" << "\n";
	n = 1;
	std::cout << "n = " << n << "\n";
	std::cout << "expected maxn = " << 0 << "\n";
	std::cout << s.canPlaceFlowers(flowerbed, n) << "\n";
	std::cout << "\n";

	std::vector<int> flowerbed2 (20000, 0);
	std::cout << "{ 0, 0, ... 0, 0 } size 20000" << "\n";
	n = 20000;
	std::cout << "n = " << n << "\n";
	std::cout << "expected maxn = " << 10000 << "\n";
	std::cout << s.canPlaceFlowers(flowerbed2, n) << "\n";
	std::cout << "\n";

	std::vector<int> flowerbed3 (20000, 0);
	std::cout << "{ 0, 0, ... 0, 0 } size 20000" << "\n";
	n = 10000;
	std::cout << "n = " << n << "\n";
	std::cout << "expected maxn = " << 10000 << "\n";
	std::cout << s.canPlaceFlowers(flowerbed3, n) << "\n";
	std::cout << "\n";

	flowerbed = { 1, 0, 0, 0, 1, 0, 1 };
	std::cout << "{ 1, 0, 0, 0, 1, 0, 1 }" << "\n";
	n = 1;
	std::cout << "n = " << n << "\n";
	std::cout << "expected maxn = " << 1 << "\n";
	std::cout << s.canPlaceFlowers(flowerbed, n) << "\n";
	std::cout << "\n";
	
	flowerbed = { 0, 0, 1, 0 };
	std::cout << "{ 0, 0, 1, 0 }" << "\n";
	n = 1;
	std::cout << "n = " << n << "\n";
	std::cout << "expected maxn = " << 1 << "\n";
	std::cout << s.canPlaceFlowers(flowerbed, n) << "\n";
	std::cout << "\n";

	flowerbed = { 0, 0, 1, 0, 0 };
	std::cout << "{ 0, 0, 1, 0, 0 }" << "\n";
	n = 1;
	std::cout << "n = " << n << "\n";
	std::cout << "expected maxn = " << 2 << "\n";
	std::cout << s.canPlaceFlowers(flowerbed, n) << "\n";
	std::cout << "\n";

	flowerbed = { 0,0,1,0,0,0,0,1,0,1,0,0,0,1,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0 };
	std::cout << "{ 0,0,1,0,0,0,0,1,0,1,0,0,0,1,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0 }" << "\n";
	n = 17;
	std::cout << "n = " << n << "\n";
	std::cout << "expected maxn = " << 15 << "\n";
	std::cout << s.canPlaceFlowers(flowerbed, n) << "\n";
	std::cout << "\n";

	flowerbed = { 0, 1, 0 };
	std::cout << "{ 0, 1, 0 }" << "\n";
	n = 1;
	std::cout << "n = " << n << "\n";
	std::cout << "expected maxn = " << 0 << "\n";
	std::cout << s.canPlaceFlowers(flowerbed, n) << "\n";
	std::cout << "\n";
	
	flowerbed = { 1, 0, 0, 0, 0, 1 };
	std::cout << "{ 1, 0, 0, 0, 0, 1 }" << "\n";
	n = 1;
	std::cout << "n = " << n << "\n";
	std::cout << "expected maxn = " << 1 << "\n";
	std::cout << s.canPlaceFlowers(flowerbed, n) << "\n";
	std::cout << "\n";

	flowerbed = { 1, 0, 1, 0, 0, 1, 0 };
	std::cout << "{ 1, 0, 1, 0, 0, 1, 0 }" << "\n";
	n = 1;
	std::cout << "n = " << n << "\n";
	std::cout << "expected maxn = " << 0 << "\n";
	std::cout << s.canPlaceFlowers(flowerbed, n) << "\n";
	std::cout << "\n";
}
