#include "Sandwich.h"

void Sandwich::print()
{
	cout << "I am Sandwich no: " << rand() % 100 + 1;
	cout << " with slice " << rand() % 100 + 1 <<" , slice " << rand() % 100 + 1<< " And Cheese Slice " << rand() % 100 + 1<< endl;
}