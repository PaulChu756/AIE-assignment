#include "By2.h"

//Operator 		Symbol 	Form 		Operation
//left shift	<<=		x <<= y 		all bits in x shifted left y bits
//right shift	>>=		x >>= y 		all bits in x shifted right y bits
//bitwise NOT 	~		~x 	all		bits in x flipped
//bitwise AND 	&= 		x &= y 		each bit in x AND each bit in y
//bitwise OR	|=		x |= y 		each bit in x OR each bit in y
//bitwise XOR 	^= 		x ^= y 		each bit in x XOR each bit in y

void By2::MultiplyBy2(int x) // 2 * 2 = 4;
{
	//int total = x + x;
	int total = x << 1;
	std::cout << total << std::endl;
}

void By2::MultiplyBy3(int x) //2 * 3 = 6;
{
	// 0 0 1 0 = 2
	// 0 0 1 1 = 3 * I need this
	// -----------
	// 0 1 1 0 = 6

	int total = x | 3;
	std::cout << total << std::endl;
}
