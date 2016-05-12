#include <iostream>

bool isPrime(int num)
{
	int i;
	for (i = 2; i < num; ++i)
	{
		std::cout << num << " % " << i << " = " << num%i <<std::endl;
		// Check if num is compare to 0 to see if it's prime or not.
		if (i == 0 || i == 1 || num % i == 0)
		{
			std::cout << "remainder of " << i << ", "<< num << " is not 0" << std::endl;
			std::cout << "False : Not a Prime Number" << std::endl;
			std::cout << " " << std::endl;
			// Return false if it's not a prime number
			return false;
		}
	}
	// Return true if it's a prime number.
	std::cout << "True: Is a Prime Number" << std::endl;
	return true;
}

int HighestPrime(int startNum, int endNum)
{
	int highestPrime = 0; // int to have the highest prime
	for (startNum = 0; startNum < endNum; startNum++) // Debugging for checking startNum to endNum is prime
	{
		std::cout << " " << std::endl;
		std::cout << startNum << std::endl;
		std::cout << " " << std::endl;

		if (isPrime(startNum)) // if the number is prime
		{
			if (startNum > highestPrime) // Give the int highestPrime that number
			{
				highestPrime = startNum;
			}
		}
	}
	std::cout << "The highest prime number is: " << highestPrime << std::endl;
	return highestPrime;
}

int SumOfPrimes(int startNum, int endNum)
{
	int sumOfPrimes = 0;
	for (startNum = 0; startNum <= endNum; startNum++) // Loop through to add all the prime numbers together
	{
		std::cout << " " << std::endl;
		std::cout << startNum << std::endl;
		std::cout << " " << std::endl;

		if (isPrime(startNum)) // checks if the number is prime
		{
			sumOfPrimes += startNum; // add all the prime numbers together!
		}
	}
	std::cout << "Sum of prime numbers is! " << sumOfPrimes << std::endl;
	return sumOfPrimes;
}

int Factor(int num)
{
	//Input number, and output all the factors that go into the input.
	int factorOfNum = 0;

	for (int i = 1; i < num; ++i)
	{
		if (num % i == 0)
		{
			factorOfNum = i;
			std::cout << num << " % " << factorOfNum << " == 0 " << std::endl;
		}
	}
	return factorOfNum;
}

int HighestPrimeFactor(int startNum, int endNum)
{
	int highestPrimeFactor = 0;
	int array[10];

	for (int i = 10; i >= 0; --i)
	{
		array[i] = Factor(endNum);
	}
	// all the factors between inputs
	// So I factor the number, but now I need to store the numbers so I can compare them to see which one is the
	// highest prime factor

	std::cout << endNum << " % " << startNum << " = " << endNum%startNum << std::endl;
	std::cout << "Highest prime factor of: " << endNum << " is " << highestPrimeFactor << std::endl;
	std::cout << " " << std::endl;

	return highestPrimeFactor;
}

int main()
{
	while (true)
	{
		int p, startNumber, endNumber;

		//// Just for Prime Number
		/*std::cout << "Enter a number: " << std::endl;
		std::cin >> p;
		isPrime(p);*/

		//// Highest Prime Number
		/*std::cout << "Enter two numbers to find out what's the highest prime!" << std::endl;
		std::cin >> startNumber >> endNumber;
		HighestPrime(startNumber, endNumber);*/

		//// Sum of Prime Numbers
		/*std::cout << "Enter two numbers to find out the sum of all the prime numbers!" << std::endl;
		std::cin >> startNumber >> endNumber;
		SumOfPrimes(startNumber, endNumber);*/

		//// Factor
		std::cout << "Enter a number, to see if it has factors!" << std::endl;
		std::cin >> p;
		Factor(p);

		//// Highest Prime Factor
		/*std::cout << "Enter two numbers to find out the highest prime factor" << std::endl;
		std::cin >> startNumber >> endNumber;
		HighestPrimeFactor(startNumber, endNumber);*/
	}
	system("pause");
}

