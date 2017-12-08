#include "stdafx.h"
#include <iostream>

const int ROW = 4;
const int COL = 3;

int sum(int a, int b) {
	return a + b;
}


// display list
void dispList(int myList[][COL], int rowNum) {
	for (int row = 0; row < rowNum; row++) {
		for (int col = 0; col < COL; col++) {
			std::cout << myList[row][col] << " ";
		}
		std::cout << std::endl;
	}

}