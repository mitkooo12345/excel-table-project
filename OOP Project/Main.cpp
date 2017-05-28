#include <fstream>
#include "Cell.h"
#include"UserController.h"

const int BUFF_SIZE = 5000;

void printFileName(char* arr, int pos, int size) {
	for (int i = pos; i < size; i++) {
		std::cout << arr[i];
	}
}

int getFileNameStart(char* arr, int size) {
	for (int i = size; i > 0; i--) {
		if (arr[i] == '\\') {
			return i+1;
		}
	}
}

int main() {

	char buffer[BUFF_SIZE];

	UserController controller;

	for (;;) {
		controller.displayPromtp();
		std::cin.getline(buffer, BUFF_SIZE);

		int size = strlen(buffer)+1;
		char* arr = new char[size];

		for (int i = 0; i < size; i++) {
			arr[i] = buffer[i];
		}

		memset(buffer, 0, BUFF_SIZE);
		
		//exit
		if (strcmp("exit", arr) == 0) {
			std::cout << "Exiting the program...\n";
			break;

		//close
		} else if (strcmp("close", arr) == 0) {
			controller.close();

		//open
		} else if (strcmp("open", arr) == 0) {
			//TODO:

			std::cin.getline(buffer,BUFF_SIZE);

			delete[] arr;

			size = strlen(buffer) + 1;
			arr = new char[size];

			for (int i = 0; i < size; i++) {
				arr[i] = buffer[i];
			}
			
			//open file
			if (controller.open(arr)) {

				std::cout << "Successfully opened \"";
				printFileName(arr, getFileNameStart(arr, size),size-1);
				std::cout << "\"\n";

			} else {
				std::cout << "File failed opening\n";
			}

			delete[] arr;

		//save
		} else if (strcmp("saveas", arr) == 0) {
			//TODO:
			controller.saveAs("");

		//save as
		} else if (strcmp("save", arr) == 0) {
			//TODO:
			controller.save();
		}
	}

	return 0;
}