#include "BinStr.h"

int main() {
	BinStr a = create_BinStr("10011", 5);
	BinStr b = create_BinStr("01101", 5);
	BinStr c = XOR(a, b);
	print(c);
	destroy_BinStr(a);
	destroy_BinStr(b);
	destroy_BinStr(c);
	return 0;
}
