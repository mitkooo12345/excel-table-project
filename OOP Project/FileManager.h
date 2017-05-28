#pragma once

#include<fstream>
#include "Table.h"

class FileManager {
public:
	FileManager();
	FileManager(const FileManager&) = delete;
	FileManager& operator=(const FileManager&) = delete;
	~FileManager();

	bool openFile(char*);
	void closeFile();
	void writeFile();

private:	

	std::fstream file;
	Table table;
	
	void deserialize();
};

