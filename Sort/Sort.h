#pragma once

#include <vector>

namespace sort
{
	class Sort
	{
	public:
		~Sort();
		Sort* GetInstance();
		void DeleteInstance();
		void QuickSortRecursive(std::vector<int>& nums, unsigned int left, unsigned int right);

	private:
		Sort();
		Sort(const Sort& other);
		Sort& operator=(const Sort& rhs);

		unsigned int partition(std::vector<int>& nums, unsigned int left, unsigned int right);
	private:
		static Sort* mInstance;
	};
}