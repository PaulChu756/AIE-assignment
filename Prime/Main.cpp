#include <iostream>
#include <string>
#include "By2.h"
#include "0IntheBack.h"

void UpperCase(std::string s)
{
	// Loop through the string, from beginning to end of string, check if it's the beginning letter is lower, and then uppercase it
	// then check if it has a space, and then the next element in string, if is lower, uppercase it.

	s.front() = toupper(s.front()); // uppercase the first element in the string
	
	for (unsigned i = 1; i < s.length(); i++) // start at 1 because it's the second element in the string
	{
		if (isupper(s.at(i))) // if any in-between letters were uppercase
		{
			s.at(i) = tolower(s.at(i)); // lowercase
		}

		if (s.at(i - 1) == ' ')
		{
			s.at(i) = toupper(s.at(i));
		}
	}
	std::cout << s << std::endl;
}

int main()
{
	/*while (true)
	{*/
		//// (Factorying)
		//	factor(2);
		//	cout << factor << endl;

		//// (Nodes)
		//	zero.data = 0;
		//	one.data = 1;
		//	two.data = 2;
		//	three.data = 3;
		//	four.data = 4;
		//	five.data = 5;
		//	print();
		//	swapNode(&one, &three);
		//	print();

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
		HighestPrimeFactor(num);*/
	//}

	//// (UpperCase)
	/*UpperCase("The quick BROWN FOx");
	UpperCase("the quick brown fox");
	UpperCase("THE QUICK BROWN FOX");*/

	////(MultiplyBy2
	//By2 by;
	//by.MultiplyBy2(2);
	//by.MultiplyBy3(2);

	int x[] = { 2, 0, 2, 3, 4, 64, 98, 0, 2, 0 };
	Zero zero;
	zero.ZeroValue(x, 10);

	system("pause");
}