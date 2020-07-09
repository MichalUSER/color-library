#include "color.h"

int main()
{
	for(int x = 0; x < 9; x++)
	{

		cout << toColor("Some text", x);
		cout << endl;
	}
	return 0;
}
