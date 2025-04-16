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
	afficher(vec);
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
	afficher(vec);
}

int partition(std::vector<int>& vec, int low, int high){
	int pivot = vec[high];
	int  i = low - 1;

	for (int j = low; j < high; ++j)
	{
		if (vec[j] < pivot)
		{
			++i;
			std::swap(vec[i], vec[j]);
		}
	}

	std::swap(vec[i + 1], vec[high]);
	return i + 1;
}
 
 
 void quickSort(std::vector<int>& vec, int low, int high){
 	if(low < high){
 		int pi = partition(vec, low, high);
 		quickSort(vec, low, pi - 1);
 		quickSort(vec, pi + 1, high);
 		
 	}
 	//afficher(vec);
 }

