#pragma once

#include <vector>

namespace quicksort
{
	class QuickSort
	{
	public:
		~QuickSort();
		static QuickSort* GetInstance();
		void DeleteInstance();
		void QuickSortRecursive(std::vector<int>& nums, int left, int right);

	private:
		QuickSort();
		QuickSort(const QuickSort& other);
		QuickSort& operator=(const QuickSort& rhs);

		size_t partition(std::vector<int>& nums, int left, int right);
		void swap(std::vector<int>& nums, int i, int j);
	private:
		static QuickSort* mInstance;
	};
}

