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

bool ProjectEuler::isEven(int num)
{
	if (num % 2 == 0)
	{
		std::cout << "True" << std::endl;
		return true;
	}
	else
		std::cout << "False" << std::endl;
	return false;
}

std::vector<int> ProjectEuler::fibUntil(int maxNum)
{
	int first = 1, second = 1;
	while (first < maxNum)
	{
		int t = first + second;
		first = second;
		second = t;

		fibUntil.push_back(first);
		return fibUntil;
	}
}

int ProjectEuler::smallestMultiple(int num)
{
	/*
	2520 is the smallest number that can be divided 
	by each of the numbers from 1 to 10 without any remainder.

	What is the smallest positive number that is evenly 
	divisible by all of the numbers from 1 to 20?
	*/

	int smallestMult = 1;
	bool condition = true;
	while (condition)
	{
		for (int i = 1; i <= num; i++)
		{
			if (smallestMult % i != 0)
			{
				break;
				return smallestMult;
			}
			else
			{
				if (num == i)
				{

				}
			}
			smallestMult++;
		}
	}
	return smallestMult;
}
