#pragma once
#include <iostream>
#include <vector>

class ProjectEuler
{
	public:
		int sumOfThreeAndFive(int num);
		int evenFibNum(int num);
		bool isEven(int num);
		std::vector<int> fibUntil(int num);
		int sumEvens(std::vector<int> num);
		int largestPrimeFactor(int num);
		int smallestMultiple(int num);
		bool NumberIsDivisibleByNumbersInRange(int number, int start, int end);
		int SmallestNumberDivisibleByNumbersInRange(int start, int end);
		int d();
		int sumOfSquares(int num);
		int sqaureOfSums(int num);
		int sqaureOfSumsDifferencesumOfSquares(int num);
		int tenThousandAndOnePrimeNumber(int num);
};
