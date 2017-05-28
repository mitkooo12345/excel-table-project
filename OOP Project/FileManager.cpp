#include "FileManager.h"

const int BUFFER_SIZE = 5000;


FileManager::FileManager() {

}


FileManager::~FileManager() {

}

bool FileManager::openFile(char* path) {

	//file exist
	file.open(path, std::ios::in | std::ios::out);

	if (file.is_open()) { 

		//deserialize
		return true;


	//file does not exist
	} else {
		file.open(path, std::ios::out, std::ios::trunc);
		if (file.is_open()) {

			//deserialize..its empty
			return true;
		}

	}

	return false;
}

void FileManager::closeFile() {
	//TODO: delete Table
	file.close();
}

void FileManager::deserialize() {
	char buffer[BUFFER_SIZE];
	bool lineEnd = false;




	for (int i = 0;; i++) {

		file.get(buffer, BUFFER_SIZE);

		for (int j = 0; j < BUFFER_SIZE; j++) {
			if (buffer[j] == '\n') {
				lineEnd = true;
				break;
			}
		}

		if (lineEnd) {
			//TODO:
			lineEnd = false;
		}
	}




}

void FileManager::writeFile() {

}
