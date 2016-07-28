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

// Does not work, completed largest prime factor on Prime.cpp.
int ProjectEuler::largestPrimeFactor(int num)
{
	for (int i = 2; i < num; i++)
	{
		//std::cout << num << " % " << i << " = " << num%i <<std::endl;
		if (num % i == 0)
		{
			/*std::cout << "remainder of " << i << ", " << num << " is not 0" << std::endl;
			std::cout << "False: is not a Prime Number" << std::endl;
			std::cout << " " << std::endl;*/
		}
	}

	/*int primeFactor = 0;
	for (long long i = 1; i < num; i++)
	{
		if (isPrime(i))
		{
			primeFactor = i;

			if (num % primeFactor == 0)
			{
				std::cout << primeFactor << std::endl;
			}
		}
	}
	return primeFactor;*/
	return true;
}

int ProjectEuler::smallestMultiple(int num)
{
	/*
	2520 is the smallest number that can be divided 
	by each of the numbers from 1 to 10 without any remainder.

	output: 2520
	input: 10 or 20
	So we already start off at 1.

	So I know that each number from 1 to 10 can divide into 2520
	with no remainder, trying to figure out how to divide all numbers
	in a for loop, and if the number can not be divided 
	by any numbers in the for loop, add 1 to smallestNum and try again.

	What is the smallest positive number that is evenly 
	divisible by all of the numbers from 1 to 20?
	*/

	int smallestNum = 1;
	bool condition = true;
	while (condition)
	{
		for (int i = 1; i <= num; ++i)
		{
			if (smallestNum % i != 0)
			{
				break;
			}
			else
			{
				if (i == num)
				{
					condition = false;
					std::cout << smallestNum << std::endl;
					return smallestNum;
				}
			}
		}
		smallestNum++;
	}
	return smallestNum;
}

int ProjectEuler::d()
{
	int a = 0, b = 0;
	int c = 1, d = 1;

	std::cout << d << std::endl;
	while (a != 10)
	{
		d = b + c;
		b = c;
		c = d;
		++a;
		std::cout << d << std::endl;
	}
	return d;
}
