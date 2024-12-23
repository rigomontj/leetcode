#include <string>
#include <iostream>

class Solution
{
public:
    std::string mergeAlternately(std::string word1, std::string word2)
    {
        std::size_t i { 0 };
        std::size_t j { 0 };
        std::size_t size1 { word1.size() };
        std::size_t size2 { word2.size() };
        std::string mergedString (size1 + size2, '\0');

        for (std::size_t k = 0; k < size1 + size2; k++)
        {
            if ((!(k % 2) && (((i < size1 && j < size2)) || (size1 == size2)))
			|| (!(i < size1 && j < size2) && size1 > size2))
                mergedString[k] = word1[i++];
            else
               	mergedString[k] = word2[j++];
        }
        return mergedString;
    }
};

int main()
{
	Solution s {};
	std::string word1 {};
	std::string word2 {};

	word1 = "abc";
	word2 = "pqr";
	std::cout << word1 << " " << word2 << "\n";
	std::cout << "R apbqcr" << "\n";
	std::cout << "T " << s.mergeAlternately(word1, word2) << "\n";
	std::cout << "\n";

	word1 = "ab";
	word2 = "pqrs";
	std::cout << word1 << " " << word2 << "\n";
	std::cout << "R apbqrs" << "\n";
	std::cout << "T " << s.mergeAlternately(word1, word2) << "\n";
	std::cout << "\n";

	word1 = "abcd";
	word2 = "pq";
	std::cout << word1 << " " << word2 << "\n";
	std::cout << "R apbqcd" << "\n";
	std::cout << "T " << s.mergeAlternately(word1, word2) << "\n";
	std::cout << "\n";

	word1 = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	word2 = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
	std::cout << word1 << " " << word2 << "\n";
	std::cout << "R abababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababab" << "\n";
	std::cout << "T " << s.mergeAlternately(word1, word2) << "\n";
	std::cout << "\n";

	word1 = "a";
	word2 = "b";
	std::cout << word1 << " " << word2 << "\n";
	std::cout << "R ab" << "\n";
	std::cout << "T " << s.mergeAlternately(word1, word2) << "\n";
	std::cout << "\n";

	return 0;
}
