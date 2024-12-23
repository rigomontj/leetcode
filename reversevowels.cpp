#include <iostream>
#include <string>

bool isVowel(char c)
{
	if 	  (c == 'a' || c == 'A'
		|| c == 'e' || c == 'E'
		|| c == 'i' || c == 'I'
		|| c == 'o' || c == 'O'
		|| c == 'u' || c == 'U'
		|| c == 'y' || c == 'Y')
		return 1;
	else
		return 0;
}

class Solution
{
	public:
		std::string reverseVowels(std::string s) 
		{
			char swp {};
			std::size_t i { 0 };
			std::size_t j { s.size() - 1 };

			while (i < j)
			{
				if (isVowel(s[i]))
				{
					while (!isVowel(s[j]) && i + 1 < j)
						j--;

					if (isVowel(s[i]) && isVowel(s[j]))
					{
							swp = s[i];
							s[i] = s[j];
							s[j] = swp;
							j--;
					} 
				}
				i++;
			}

			return s;
    	}
};

int main()
{
	Solution s {};

	std::cout << "t " << "AceCreIm" << "\n";
	std::cout << "t "<< s.reverseVowels("IceCreAm") << "\n";
	std::cout << "t "<< "leotcede" << "\n";
	std::cout << "t "<< s.reverseVowels("leetcode") << "\n";
	std::cout << "t "<< "JOlOs RIGeMuNT" << "\n";
	std::cout << "t "<< s.reverseVowels("Jules RIGOMONT") << "\n";
	std::cout << "t "<< "JiWw4MLarJ43m8dTILsk" << "\n";
	std::cout << "t "<< s.reverseVowels("JIWw4MLarJ43m8dTiLsk") << "\n";
	std::cout << "t "<< "a" << "\n";
	std::cout << "t "<< s.reverseVowels("a") << "\n";
	std::cout << "t "<< "a." << "\n";
	std::cout << "t "<< s.reverseVowels("a.") << "\n";
	std::cout << "t "<< "yo! Bottoms Up, u.S. Motto, boY!" << "\n";
	std::cout << "t "<< s.reverseVowels("Yo! Bottoms up, U.S. Motto, boy!") << "\n";
	
	//std::string t2 (300000, 'a');
	//std::cout << s == s.reverseVowels(t2) << "\n";

	return 0;
}
