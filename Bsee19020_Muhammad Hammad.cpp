// Bsee19020_Muhammad Hammad.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Bread.h"
#include "BreadSlices.h"
#include "Cheeseslice.h"
#include "Fries.h"
#include "Colddrink.h"
#include "Sandwich.h"
#include "lunch.h"
using namespace std;
ostream& operator << (ostream& out, Bread& b)
{
    b.print();
    return out;
}
ostream& operator << (ostream& out, Sandwich& sw)
{
   sw.print();
    return out;
}
ostream& operator << (ostream& out, Lunch& l)
{
    l.print();
    return out;
}
ostream& operator << (ostream& out, Colddrink& cd)
{
   cd.print();
    return out;
}
ostream& operator << (ostream& out, BreadSlices& bs)
{
    bs.print();
    return out;
}
ostream& operator << (ostream& out, Cheeseslice& cs)
{
    cs.print();
    return out;
}
ostream& operator << (ostream& out, Fries& f)
{
    f.print();
    return out;
}
int main()
{
    cout << "BSEE19020\nMuhammad Hammad\n";
    Bread a;
    BreadSlices sd;
    Cheeseslice cs;
    Fries f;
    Colddrink cd;
    Lunch l;
    Sandwich sw;
    cout << a;
    cout << sd;
    cout << cs;
    cout << f;
    cout << cd;
    cout << sw;
    cout << l;
}