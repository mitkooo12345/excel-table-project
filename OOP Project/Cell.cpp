#include "Cell.h"

Cell::Cell(int value) {
	intNum = value;
}

Cell::Cell(double value) {
	doubleNum = value;
}

Cell::Cell(char* value) {
	//+1 ?

	int size = strlen(value);

	//make copy
	stringArr = new char[size];
	strcpy_s(stringArr, size, value);
	
}

Cell::~Cell() {
	delete[] stringArr;
	stringArr = NULL;
}

void Cell::setInt(int value) {
	intNum = value;
}

int Cell::getInt() {
	return intNum;
}

void Cell::setDouble(double value) {
	doubleNum = value;
}

double Cell::getDouble() {
	return doubleNum;
}
