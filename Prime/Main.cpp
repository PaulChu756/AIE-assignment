#include <iostream>
#include <string>
#include "By2.h"
#include "0IntheBack.h"
#include "Prime.h"
#include "Node.h"
#include "ProjectEuler.h"

void UpperCase(std::string s)
{
	// Loop through the string, from beginning to end of string, 
	// check if it's the beginning letter is lower, and then uppercase it
	// then check if it has a space, and then the next element in string, if is lower, uppercase it.

	s.front() = toupper(s.front()); // uppercase the first element in the string
	
	for (unsigned i = 1; i < s.length(); i++) // start at 1 because it's the second element in the string
	{
		if (isupper(s.at(i))) // if any in-between letters were uppercase
		{
			s.at(i) = tolower(s.at(i)); // lowercase
		}

		if (s.at(i - 1) == ' ') // looks for a space
		{
			if (islower(s.at(i))) // check letter is lower
			{
				s.at(i) = toupper(s.at(i)); // I'm trying to uppercase the next letter behind the space
			}
		}
	}
	std::cout << s << std::endl;
}

Node zero;
Node one;
Node two;
Node three;
Node four;
Node five;

void print()
{
	std::cout << zero.data; // 0
	std::cout << "->"<<  zero.next->data; // 1, when swapped, be 3
	std::cout << "->" << one.next->data; // 2 // somehow it's 4
	std::cout << "->" << two.next->data; // 3 
	std::cout << "->" << three.next->data; // 4
	std::cout << "->" << four.next->data << std::endl; // 5
}


int main()
{
	//// (Nodes)
	/*zero = { 0, &one, &zero };
	one = { 1, &two, &zero };
	two = { 2, &three, &zero };
	three = { 3, &four, &zero };
	four = { 4, &five, &zero };
	five = { 5, nullptr, &zero };

	print();
	zero.swapNode(&zero, &one, &three);
	print();*/

	/*while (true)
	{*/
		//// (Factorying)
		//	factor(2);
		//	cout << factor << endl;

		//(Prime)
		//int num;

		//// Just for Prime Number
		/*std::cout << "Enter a number: " << std::endl;
		std::cin >> num;
		isPrime(p);*/

		//// Highest Prime Number
		/*std::cout << "Enter two numbers to find out what's the highest prime!" << std::endl;
		std::cin >> num;
		HighestPrime(num);*/

		//// Sum of Prime Numbers
		/*std::cout << "Enter two numbers to find out the sum of all the prime numbers!" << std::endl;
		std::cin >> num;
		SumOfPrimes(num);*/

		//// Highest Prime Factor
		/*std::cout << "Enter a number to find out the highest prime factor." << std::endl;
		std::cin >> num;
		PrimeNum primeNum;
		primeNum.HighestPrimeFactor(num);*/

	
	//}
	

	//// (UpperCase)
	/*UpperCase("The quick BROWN FOx");
	UpperCase("the quick brown fox");
	UpperCase("THE QUICK BROWN FOX");*/

	////(MultiplyBy2
	//By2 by;
	//by.MultiplyBy2(2);
	//by.MultiplyBy3(2);

	//// Zero to the back function
	/*int x[] = { 2, 0, 2, 3, 4, 64, 98, 0, 2, 0 };
	Zero zero;
	zero.ZeroValue(x, 10);*/

	ProjectEuler euler;
	//euler.sumOfThreeAndFive(1000);
	//euler.evenFibNum(10);
	//euler.evenFibNum(4000000);
	euler.smallestMultiple();
	

	system("pause");
}