#include "0IntheBack.h"

void Zero::ZeroValue(int num[], int length)
{
	for (int i = 0; i < length; ++i)
	{
		if (num[i] == 0)
		{
			num[length - 1] = 0; // put the last element of the array to 0

			for (int j = i; j < length; ++j) // start where it found 0
			{
				if (j == 9) // if last element
				{
					num[j] = 0; // set to 0
				}
				else
					num[j] = num[j + 1]; // current element to grab the next element to push up other elements in the array
				print(num, length);
			}
		}
	}
}

void Zero::print(int num[], int length)
{
	for (int i = 0; i < length; ++i)
	{
		if (i == length - 1)
		{
			std::cout << num[i] << std::endl;
		}
		else
			std::cout << num[i] << ' ';
	}
}