#include <iostream>
using namespace std;

int factor(int i)
{
	if (i == 1)
	{
		return i;
	}

	else
		return i * factor(i - 1);
}