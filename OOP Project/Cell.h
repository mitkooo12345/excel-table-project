#pragma once

#include<iostream>

class Cell {

public:
	Cell(int);
	Cell(double);
	Cell(char*);

	Cell(const Cell&) = delete;
	Cell& operator=(const Cell&) = delete;
	~Cell();
	

	void setInt(int);
	int getInt();

	void setDouble(double);
	double getDouble();
	
private:
	int intNum;
	double doubleNum;
	char* stringArr;

	int x;
	int y;
};



