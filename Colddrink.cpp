#include "Colddrink.h"
#include "Bread.h"
#include <iostream>
using namespace std;
void Colddrink::print()
{
	cout << "I am Cold Drink no: " << rand() % 100 + 1 << endl;
}