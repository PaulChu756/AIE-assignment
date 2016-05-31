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

int HighestPrime(int num)
{
	int highestPrime = 0; // int to have the highest prime
	for (int i = 1; i < num; i++) // Debugging for checking startNum to endNum is prime
	{
		std::cout << " " << std::endl;
		std::cout << i << std::endl;
		std::cout << " " << std::endl;

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

int SumOfPrimes(int num)
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

int HighestPrimeFactor(long num)
{
	int highestPrimeFactor = 0;
	int factor = 0;

	//Check factor of number
	for (int i = 1; i < num; ++i)
	{
		if (num % i == 0)
		{
			factor = i;
			HighestPrime(factor);
			highestPrimeFactor = factor;
			std::cout << highestPrimeFactor << std::endl;
			std::cout << "Highest prime factor of: " << num << " is " << highestPrimeFactor << std::endl;
		}
	}
	return highestPrimeFactor;
}

int main()
{
	while (true)
	{
		int num;
		
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
		std::cout << "Enter a number to find out the highest prime factor." << std::endl;
		std::cin >> num;
		HighestPrimeFactor(num);
	}
	system("pause");
}

