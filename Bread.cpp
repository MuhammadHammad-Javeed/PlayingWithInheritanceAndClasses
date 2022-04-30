
#include "Bread.h"
#include <iostream>
using namespace std;

void Bread::print()
{
	cout << "This Bread no: " << rand() % 100 + 1 <<endl;
	
	for ( int i = 1; i < 10; i++)
		
		{
			
			cout << " BreadSlices" << i <<endl;
	}
}