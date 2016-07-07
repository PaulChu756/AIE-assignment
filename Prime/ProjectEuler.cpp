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
		//std::cout << "True" << std::endl;
		return true;
	}
	else
		//std::cout << "False" << std::endl;
	return false;
}

std::vector<int> ProjectEuler::fibUntil(int maxNum)
{
	std::vector<int> list = std::vector<int>();
	int first = 1, second = 1;

	while (first < maxNum)
	{
		//std::cout << first << std::endl;
		int t = first + second;
		first = second;
		second = t;
		list.push_back(first);
		//std::cout << list.size() << std::endl;
	}
	return list;
}

int ProjectEuler::sumEvens(std::vector<int> list)
{
	int evenTotal = 0;
	for (int i = 0; i < list.size(); i++)
	{
		if (isEven(list[i]))
		{
			evenTotal += i;
			std::cout << evenTotal << std::endl;
		}
	}
	return true;
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
