#include "QuickSort.h"

namespace quicksort
{
	QuickSort* QuickSort::mInstance = nullptr;

	QuickSort::QuickSort()
	{
	}

	QuickSort::~QuickSort()
	{
	}

	QuickSort* QuickSort::GetInstance()
	{
		if (mInstance == nullptr)
		{
			mInstance = new QuickSort();
		}

		return mInstance;
	}

	void QuickSort::DeleteInstance()
	{
		delete mInstance;
		mInstance = nullptr;
	}

	void QuickSort::QuickSortRecursive(std::vector<int>& nums, int left, int right)
	{
		if (left >= right)
		{
			return;
		}

		int position = partition(nums, left, right);

		QuickSortRecursive(nums, left, position - 1);
		QuickSortRecursive(nums, position + 1, right);
	}

	size_t QuickSort::partition(std::vector<int>& nums, int left, int right)
	{
		int pivot = nums[right];
		int i = left;

		for (size_t j = left; j < right; ++j)
		{
			if (nums[j] < pivot)
			{
				swap(nums, i, static_cast<int>(j));
				++i;
			}
		}

		swap(nums, i, right);

		return i;
	}

	void QuickSort::swap(std::vector<int>& nums, int i, int j)
	{
		unsigned int tmp = nums[i];
		nums[i] = nums[j];
		nums[j] = tmp;
	}
}