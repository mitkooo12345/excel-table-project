#pragma once

#include"Cell.h"

class Table {

public:
	Table();
	Table(const Table&) = delete;
	Table& operator=(const Table&) = delete;
	~Table();

	//TODO:
	void print();
	void edit();

	bool hasChanges();
	void setChanges(bool);

private:
	int rowSize = 0;
	bool changes;
	char** rows;

	//
	void addRow(char* row);
	
};

