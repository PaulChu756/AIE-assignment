#include <iostream>

bool PrimeNumber(int num)
{
	int i;
	for (i = 2; i < num; ++i)
	{
		std::cout << num << " % " << i << " = " << num%i <<std::endl;

		// Check if num is compare to 0 to see if it's prime or not.
		if (num % i == 0 || num == 2)
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

int HighestPrime(int num)
{
	int numRange[num];
	return true;
}

int main()
{
	while (true)
	{
		int p;
		std::cout << " " << std::endl;
		std::cout << "Enter a number: " << std::endl;
		std::cin >> p;
		PrimeNumber(p);
		//HighestPrime(p);
	}
	system("pause");
}

