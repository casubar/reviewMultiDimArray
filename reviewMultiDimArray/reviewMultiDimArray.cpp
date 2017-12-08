// reviewMultiDimArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "reviewMultiDimArray_Header.h"

using namespace std;

const int NUM_ROW = 4;
const int NUM_COL = 3;


int main()
{
	int myList[NUM_ROW][NUM_COL] = { {1,2,3},
					   {4,5,6},
					   {7,8,9},
					   {10,11,12} };

	char p;


	dispList(myList, 4);


	cout << endl;
	cout << endl;
	cout << "enter any key!! ";
	cin >> p;
    return 0;
}

