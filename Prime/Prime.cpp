#include "Prime.h"
bool PrimeNum::isPrime(int num)
{
	int i;
	for (i = 2; i < num; ++i)
	{
		//std::cout << num << " % " << i << " = " << num%i <<std::endl;
		// Check if num is compare to 0 to see if it's prime or not.
		if (i == 0 || i == 1 || num % i == 0)
		{
			/*std::cout << "remainder of " << i << ", "<< num << " is not 0" << std::endl;
			std::cout << "False : Not a Prime Number" << std::endl;
			std::cout << " " << std::endl;*/
			// Return false if it's not a prime number
			return false;
		}
	}
	// Return true if it's a prime number.
	//std::cout << "True: Is a Prime Number" << std::endl;
	return true;
}

int PrimeNum::HighestPrime(long long num)
{
	long long highestPrime = 0;
	for (long long i = 1; i < num; i++)
	{
		/*std::cout << " " << std::endl;
		std::cout << i << std::endl;
		std::cout << " " << std::endl;*/

		if (isPrime(i)) // if the number is prime
		{
			if (i > highestPrime) // Give the int highestPrime that number
			{
				highestPrime = i;
			}
		}
	}
	//std::cout << "The highest prime number is: " << highestPrime << std::endl;
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
	long long highestPrimeFactor = 0;
	long long factor = 0;

	//Check factor of number
	for (long long i = 1; i < num; i++)
	{
		if (num % i == 0)
		{
			factor = i;
			HighestPrime(factor);
			highestPrimeFactor = factor;
			//std::cout << highestPrimeFactor << std::endl;
			std::cout << "Highest prime factor of: " << num << " is " << highestPrimeFactor << std::endl;
		}
	}
	return highestPrimeFactor;
}
