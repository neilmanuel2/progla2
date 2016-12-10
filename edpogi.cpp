#include <iostream>
using namespace std;
int main ()
{
	for (int array=1 ; array<=100 ; array++)
	{
		if (array%3 == 0 && array%5 == 0)
		{
			cout << "Ed Pogi" << endl;
		}
		else if (array%5 == 0)
		{
			cout << "Ed" << endl;
		}
		else if (array%3 == 0)
		{
			cout << "Pogi" << endl;
		}
		else
		{
			cout << array << endl;
		}
	}
	return 0;
}
