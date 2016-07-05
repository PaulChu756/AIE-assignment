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
	// By considering the terms in the 
	// Fibonacci sequence whose values do not 
	// exceed four million, find the sum of the even-valued terms.

	int first = 1, second = 1;

	//for (int i = 0; i < num; i++)
	while (first < num)
	{
		int t = first + second;
		first = second;
		second = t;

		std::cout << first << std::endl;

		/*if (first % 2 == 0)
		{
			first += first;
			std::cout << first << std::endl;
		}*/
	}
	return true;
}

int ProjectEuler::smallestMultiple()
{
	/*
	2520 is the smallest number that can be divided 
	by each of the numbers from 1 to 10 without any remainder.

	What is the smallest positive number that is evenly 
	divisible by all of the numbers from 1 to 20?
	*/

	int smallestMult = 1;
	for (int i = 1; i <= 10; i++)
	{
		if (smallestMult % i == 0)
		{
			std::cout << smallestMult << " % " << i << " = " << smallestMult%i << std::endl;
			smallestMult++;
		}
	}
	return true;
}
