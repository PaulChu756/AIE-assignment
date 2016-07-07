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
		int smallestMultiple(int num);
};
