#include <iostream>

bool PrimeNumber(int num)
{
	int i;
	for (i = 2; i < num; ++i)
	{
		//std::cout << num << " % " << i << " = " << num%i <<std::endl;

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
	int highPrime = 0;
	for (startNum = 0; startNum <= endNum; startNum++)
	{
		PrimeNumber(startNum);
		std::cout << startNum << std::endl;
		/*if (startNum > highPrime)
		{
			highPrime = startNum;
			std::cout << "The highest prime number is: " << highPrime << std::endl;
		}*/
	}
	return highPrime;
}

int main()
{
	while (true)
	{
		int startNumber, endNumber;
		std::cout << " " << std::endl;
		std::cout << "Enter a number: " << std::endl;
		std::cin >> startNumber >> endNumber;
		//PrimeNumber(p);
		HighestPrime(startNumber, endNumber);
	}
	system("pause");
}

