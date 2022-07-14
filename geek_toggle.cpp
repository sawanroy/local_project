
#include <iostream>
using namespace std;

char resss;
// Returns a number which has all even
// bits of n toggled.
char evenbittogglenumber(char n)
{
	// Generate number form of 101010
	// ..till of same order as n
	char res = 0; 
    int count = 0;
	for (char temp = n; temp > 0; temp >>= 1) {

		// if bit is even then generate
		// number and or with res
		if (count % 2 == 0)
			res |= (1 << count);	

		count++;
	}

	// return toggled number
    resss = n^res;
	return n^res;
}

// Driver code
int main()
{
	char n = 7;
    printf("%d",sizeof(n));
	cout << evenbittogglenumber(n);
    printf("%c",resss);
	return 0;
}
