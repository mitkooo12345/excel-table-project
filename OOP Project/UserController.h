#pragma once

#include <iostream>
#include "FileManager.h"

class UserController {
	
public:
	UserController();
	UserController(const UserController&) = delete;
	UserController& operator=(const UserController&) = delete;
	~UserController();

	void displayPromtp();

	void close();
	bool open(char*);
	void save();
	void saveAs(char*);	

	bool isFileOpen();
	void setFileOpen(bool);

private:
	FileManager file;

	bool fileOpened;
};

