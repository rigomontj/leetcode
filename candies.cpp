#include <iostream>
#include <vector>

int getMax(std::vector<int>& vec)
{
	int max { 0 };

	for (std::size_t i = 0; i < vec.size(); i++)
		if (vec[i] > max) max = vec[i];	
	
	return max;
}

class Solution
{
	public:
    	std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies)
		{
			std::size_t size { candies.size() };
			std::vector<bool> r ( size, false );
			int max { getMax(candies) };

			for (std::size_t i = 0; i < size; i++)
				if (candies[i] + extraCandies >= max) r[i] = true;

			return r; 
    	}
};

void printBoolVec(std::vector<bool> res)
{
	std::cout << std::boolalpha;
	for (std::size_t i = 0; i < res.size(); i++)
		std::cout << res[i] << " ";
	std::cout << "\n";
	std::cout << std::noboolalpha;
}

void printIntVec(std::vector<int> res)
{
	for (std::size_t i = 0; i < res.size(); i++)
		std::cout << res[i] << " ";
	std::cout << "\n";
}

int main()
{
	Solution s {};

	std::vector<int> candies { 2, 3, 5, 1, 3 };
	int extraCandies { 3 };
	std::cout << extraCandies << "\n";
	printIntVec(candies);
	printBoolVec(s.kidsWithCandies(candies, extraCandies));
	std::cout << "\n";

	std::vector<int> candies2 { 4, 2, 1, 1, 2, 1 };
	int extraCandies2 { 1 };
	std::cout << extraCandies2 << "\n";
	printIntVec(candies2);
	printBoolVec(s.kidsWithCandies(candies2, extraCandies2));
	std::cout << "\n";

	std::vector<int> candies3 { 12, 1, 12 };
	int extraCandies3 { 10 };
	std::cout << extraCandies3 << "\n";
	printIntVec(candies3);
	printBoolVec(s.kidsWithCandies(candies3, extraCandies3));
	std::cout << "\n";

	std::vector<int> candies4 ( 100, 100 );
	int extraCandies4 { 50 };
	std::cout << extraCandies4 << "\n";
	printIntVec(candies4);
	printBoolVec(s.kidsWithCandies(candies4, extraCandies4));
	std::cout << "\n";

	std::vector<int> candies5 { 1, 1 };
	int extraCandies5 { 1 };
	std::cout << extraCandies5 << "\n";
	printIntVec(candies5);
	printBoolVec(s.kidsWithCandies(candies5, extraCandies5));
	std::cout << "\n";

	std::vector<int> candies6 { 34, 78, 22, 0, 99, 87, 90, 91, 1, 100, 25 };
	int extraCandies6 { 25 };
	std::cout << extraCandies6 << "\n";
	printIntVec(candies6);
	printBoolVec(s.kidsWithCandies(candies6, extraCandies6));
	std::cout << "\n";

	return 0;
}
