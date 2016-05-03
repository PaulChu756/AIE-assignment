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

//int main()
//{
//	factor(2);
//	cout << factor << endl;
//	system("pause");
//}