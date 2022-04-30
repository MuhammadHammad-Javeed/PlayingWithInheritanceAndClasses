#include "Lunch.h"
void Lunch::print()
{
	cout << "I am Lunch no: " << rand() % 100 + 1;
	cout << " with Sandwich " << rand() % 100 + 1 << ", Fries " << rand() % 100 + 1 << " And Drink " << rand() % 100 + 1 << endl;
}