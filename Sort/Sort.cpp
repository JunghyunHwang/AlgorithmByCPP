#include "Sort.h"

namespace sort
{
	Sort* Sort::mInstance = nullptr;

	Sort::Sort()
	{
	}

	Sort::~Sort()
	{
	}

	Sort* Sort::GetInstance()
	{
		if (mInstance == nullptr)
		{
			mInstance = new Sort();
		}

		return mInstance;
	}

	void Sort::DeleteInstance()
	{
		delete mInstance;
		mInstance = nullptr;
	}

	void Sort::QuickSortRecursive(std::vector<int>& nums, unsigned int left, unsigned int right)
	{
		if (left >= right)
		{
			return;
		}

		int position = partition(nums, left, right);
	}

	unsigned int Sort::partition(std::vector<int>& nums, unsigned int left, unsigned int right)
	{

	}
}