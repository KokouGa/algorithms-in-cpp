#include<iostream>
#include <vector>
#include "Lestrie.h"

int main(int argc, char const *argv[])
{
	std::vector<int> vec = {7, 4, 9, 1, 5, 3, 8, 6, 2, 0};

	std::vector<int> vec1 = vec;


	std::cout << " Tableau initial " << std::endl;
	std::cout << " ================ " << std::endl;

	afficher(vec1);

	std::cout << " trie par selection " << std::endl;
	std::cout << " ================ " << std::endl;

	triParSelection(vec);
	afficher(vec1);
	std::cout << " Tableau initial " << std::endl;
	std::cout << " ================ " << std::endl;

	triParInsertion(vec1);
	afficher(vec1);

	return 0;
}


