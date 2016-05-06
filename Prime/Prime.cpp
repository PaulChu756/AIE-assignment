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
			sumOfPrimes += startNum;
		}
	}
	std::cout << "Sum of prime numbers is! " << sumOfPrimes << std::endl;
	return sumOfPrimes;
}

int HighestPrimeFactor()
{
	return true;
}

int main()
{
	while (true)
	{
		int p, startNumber, endNumber;
		std::cout << " " << std::endl;

		//// Just for Prime Number
		/*std::cout << "Enter a number: " << std::endl;
		std::cin >> p;
		isPrime(p);*/

		//// Highest Prime Number
		/*std::cout << "Enter two numbers to find out what's the highest prime!" << std::endl;
		std::cin >> startNumber >> endNumber;
		HighestPrime(startNumber, endNumber);*/

		//// Sum of Prime Numbers
		std::cout << "Enter two numbers to find out the sum of all the prime numbers!" << std::endl;
		std::cin >> startNumber >> endNumber;
		SumOfPrimes(startNumber, endNumber);
	}
	system("pause");
}

