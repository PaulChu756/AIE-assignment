#include <iostream>

bool isPrime(int num)
{
	int i;
	for (i = 2; i < num; ++i)
	{
		std::cout << num << " % " << i << " = " << num%i <<std::endl;
		// Check if num is compare to 0 to see if it's prime or not.
		if (num % i == 0)
		{
			std::cout << "remainder of " << i << ", "<< num << " is not 0" << std::endl;
			std::cout << "False : Not a Prime Number" << std::endl;
			// Return true if it's not a prime number
			return true;
		}
	}
	// Return false if it's a prime number.
	std::cout << "True: Is a Prime Number" << std::endl;
	return false;
}

int HighestPrime(int startNum, int endNum)
{
	int highestPrime = 0;
	for (startNum = 0; startNum < endNum; startNum++)
	{
		isPrime(startNum);

		std::cout << " " << std::endl;
		std::cout << startNum << std::endl;	
		std::cout << " " << std::endl;

		if (startNum > highestPrime)
		{
			highestPrime = startNum;
			
		}
	}
	std::cout << "The highest prime number is: " << highestPrime << std::endl;
	return highestPrime;
}

int main()
{
	while (true)
	{
		int p, startNumber, endNumber;
		std::cout << " " << std::endl;
		//// Just for Prime Number
		//std::cout << "Enter a number: " << std::endl;
		//std::cin >> p;
		//PrimeNumber(p);
		//// Highest Prime Number
		std::cout << "Enter two numbers to find out what's the highest prime!" << std::endl;
		std::cin >> startNumber >> endNumber;
		HighestPrime(startNumber, endNumber);
	}
	system("pause");
}

