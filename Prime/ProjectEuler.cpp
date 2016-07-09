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
	int first = 0, second = 1, temp = 0, sum = 0;
	while (temp < num)
	{
		temp = first + second;
		first = second;
		second = temp;

		if (temp % 2 == 0)
		{
			sum += temp;
			std::cout << sum << std::endl;
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
			std::cout << "Even Number: " << list[i] << std::endl;
			evenTotal += list[i];
			std::cout << "Total: " << evenTotal << std::endl;
		}
	}
	return true;
}

int ProjectEuler::largestPrimeFactor(long long num)
{
	for (int i = 2; i < num; i++)
	{
		std::cout << num << " % " << i << " = " << num%i << std::endl;

		if (num % i == 0)
		{
			std::cout << "Not Prime" << std::endl;
			return false;
		}

		else if (num % i != 0)
		{
			std::cout << "Prime" << std::endl;
			return true;
		}
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
