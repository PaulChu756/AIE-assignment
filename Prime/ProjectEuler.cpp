#include "ProjectEuler.h"

int ProjectEuler::sumOfThreeAndFive(int num)
{
	int sumMulti = 0;
	for (int i = 1; i < num; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sumMulti += i;
			std::cout << sumMulti << std::endl;
		}
	}
	return true;
}

int ProjectEuler::evenFibNum(int num)
{
	int first = 1; 
	int second = 1;
	for (int i = 0; i < num; i++)
	{
		int t = first + second;
		first = second;
		second = t;

		if (first % 2 == 0)
		{
			first += first;
			std::cout << first << std::endl;
		}
	}
	return true;
}
