#include <iostream>
#include <string>
#include <string_view>

bool isDivisibleBy(std::size_t bSize, std::string_view bigStr,
				   std::size_t sSize, std::string_view smallStr) 
{		
	for (std::size_t i = 0; i < bSize; i++)	
	{
		if (bigStr[i % (sSize - 1)] != smallStr[i % (sSize - 1)]) 
			return 0;
	}

	return 1;
}

std::size_t PGCD(std::size_t s1, std::size_t s2, std::size_t smallL)
{
	std::size_t div { 0 };

	for (std::size_t i = smallL; div == 0; i--)  
		div = !(s1 % i || s2 % i) ? i : div;	

	return div;
}

class Solution
{
	public:
		std::string gcdOfStrings(std::string str1, std::string str2)
		{
			std::size_t size1 { str1.size() };
			std::size_t size2 { str2.size() };
			//std::size_t bigLen { (size1 <= size2) ? size1 : size2 };
			std::size_t smallLen { (size1 > size2) ? size1 : size2 };
			std::size_t pgcd { PGCD(size1, size2, smallLen) };
			std::string x (pgcd, '\0');	
			std::cout << pgcd << "\n";

			return x;
		}
};

int main()
{
	//Solution s {};
	std::string str1 {};
	std::string str2 {};
	/*
	str1 = "ABCABC";
	str2 = "ABC";
	std::cout << str1 << " " << str2 << "\n";
	std::cout << "EXPECTED ABC" << "\n";
	std::cout << "TESTED   " << s.gcdOfStrings(str1, str2) << "\n";
	std::cout << "\n";

	str1 = "ABABAB";
	str2 = "ABAB";
	std::cout << str1 << " " << str2 << "\n";
	std::cout << "EXPECTED AB" << "\n";
	std::cout << "TESTED   " << s.gcdOfStrings(str1, str2) << "\n";
	std::cout << "\n";

	str1 = "LEET";
	str2 = "CODE";
	std::cout << str1 << " " << str2 << "\n";
	std::cout << "EXPECTED " << "\n";
	std::cout << "TESTED   " << s.gcdOfStrings(str1, str2) << "\n";
	std::cout << "\n";
	*/
	str1 = "ABABAB";
	str2 = "AB";
	std::cout << str1 << " " << str2 << "\n";
	std::cout << "EXPECTED 1" << "\n";
	std::cout << "TESTED   " << isDivisibleBy(str1.size(), str1, str2.size(), str2) << "\n";
	std::cout << "\n";

	str1 = "ABABAB";
	str2 = "A";
	std::cout << str1 << " " << str2 << "\n";
	std::cout << "EXPECTED 0" << "\n";
	std::cout << "TESTED   " << isDivisibleBy(str1.size(), str1, str2.size(), str2) << "\n";
	std::cout << "\n";

	str1 = "ABABAB";
	str2 = "ABCD";
	std::cout << str1 << " " << str2 << "\n";
	std::cout << "EXPECTED 0" << "\n";
	std::cout << "TESTED   " << isDivisibleBy(str1.size(), str1, str2.size(), str2) << "\n";
	std::cout << "\n";
	return 0;
}

