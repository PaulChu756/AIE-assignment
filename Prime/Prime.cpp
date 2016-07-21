#include "Prime.h"
bool PrimeNum::isPrime(int num)
{
	for (int i = 2; i < num; i++)
	{
		//std::cout << num << " % " << i << " = " << num%i <<std::endl;
		if (num % i == 0)
		{
			/*std::cout << "remainder of " << i << ", " << num << " is not 0" << std::endl;
			std::cout << "False: is not a Prime Number" << std::endl;
			std::cout << " " << std::endl;*/
			return false;
		}
		else
		{
			/*std::cout << "True : a prime number" << std::endl;
			std::cout << " " << std::endl;*/
		}
	}
	return true;
}

int PrimeNum::HighestPrime(int num)
{
	long long highestPrime = 0;
	for (int i = 1; i < num; i++)
	{
		if (isPrime(i)) // if the number is prime
		{
			if (i > highestPrime) // Give the int highestPrime that number
			{
				highestPrime = i;
			}
		}
	}
	std::cout << "The highest prime number is: " << highestPrime << std::endl;
	return highestPrime;
}

int PrimeNum::SumOfPrimes(int num)
{
	int sumOfPrimes = 0;
	for (int i = 0; i <= num; i++) // Loop through to add all the prime numbers together
	{
		std::cout << " " << std::endl;
		std::cout << i << std::endl;
		std::cout << " " << std::endl;

		if (isPrime(i)) // checks if the number is prime
		{
			sumOfPrimes += i; // add all the prime numbers together!
		}
	}
	std::cout << "Sum of prime numbers is! " << sumOfPrimes << std::endl;
	return sumOfPrimes;
}

int PrimeNum::HighestPrimeFactor(long long num)
{
	int primeFactor = 0;
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
	return primeFactor;
}
