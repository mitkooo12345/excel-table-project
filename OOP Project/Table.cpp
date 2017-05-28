#include "Table.h"

Table::Table() {

}


Table::~Table() {

}

bool Table::hasChanges() {
	return changes;
}

void Table::setChanges(bool value) {
	changes = value;
}

void Table::addRow(char* row) {
	//TODO:
	++rowSize;
	rows = new char*[rowSize+1];



	rows[rowSize] = row;
}