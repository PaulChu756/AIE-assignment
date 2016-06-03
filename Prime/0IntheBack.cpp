#include "0IntheBack.h"

void Zero::ZeroValue(int num[], int length)
{
	for (int i = 0; i < length; ++i)
	{
		if (num[i] == 0)
		{
			num[length - 1] = 0; // put the last element of the array to 0

			for (int j = i; j < length; ++j)
			{
				if (j == 9)
				{
					num[j] = 0;
				}
				else
					num[j] = num[j + 1];
			}
		}
		std::cout << num[i] << ' ';
	}
}