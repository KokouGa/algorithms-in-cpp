#include<iostream>
#include <vector>
#include "lestries.h"

int main(int argc, char const *argv[])
{
	std::vector<int> vec = {7, 4, 9, 1, 5, 3, 8, 6, 2, 0};



	std::cout << " Tableau initial " << std::endl;
	std::cout << " ================ " << std::endl;

	afficher(vec);

	std::cout << " trie par selection " << std::endl;
	std::cout << " ================ " << std::endl;

	triParSelection(vec);
	//afficher(vec1);
	std::cout << " Tableau Insertion " << std::endl;
	std::cout << " ================ " << std::endl;

	triParInsertion(vec);
	//afficher(vec1);


	std::cout << " Tableau quickSort " << std::endl;
	std::cout << " ================ " << std::endl;

	quickSort(vec, 0, vec.size() - 1);
	afficher(vec);


	return 0;
}


