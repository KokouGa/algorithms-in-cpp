#include <iostream>
#include<vector>


void afficher(const std::vector<int>& vec) {

	for (int v : vec)
	{
		std::cout << v << ", ";
	}

	std::cout << std::endl; 
}

void triParSelection(std::vector<int>& vec){

	for (size_t i = 0; i < vec.size() - 1; ++i)
	{
		size_t min_index = i;

		for (size_t j = i + 1; j < vec.size(); ++j)
		{
			if (vec[j] < vec[min_index]){

			      min_index = j;

				}

			}

			std::swap(vec[i], vec[min_index]);
	}
}


void triParInsertion(std::vector<int>& vec){

	for (int i = i; i < vec.size(); ++i)
	{
		int cle = vec[i];
		size_t j = i;

		while(j > 0 && vec[j - 1]  > cle){

			vec[j] = vec[j-1];
			--j; 

		}
		vec[j] = cle;
	}
}