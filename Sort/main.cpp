#include <iostream>
#include <vector>
#include "QuickSort.h"

using namespace quicksort;

int main()
{
	std::vector<int> nums;

	nums.reserve(10);

	nums.push_back(7);
	nums.push_back(2);
	nums.push_back(5);
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(8);
	nums.push_back(7);
	nums.push_back(4);
	nums.push_back(9);
	nums.push_back(6);

	QuickSort* instance = QuickSort::GetInstance();

	instance->QuickSortRecursive(nums, 0, nums.size() - 1);

	for (std::vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
	{
		std::cout << *it << ", ";
	}

	std::cout << std::endl;

	return 0;
}