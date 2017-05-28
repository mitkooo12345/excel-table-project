#include "UserController.h"

UserController::UserController() {

}

UserController::~UserController() {

}

void UserController::close() {
	file.closeFile();
}

bool UserController::open(char* dest) {
	//TODO:
	if (file.openFile(dest)) {
		return true;
	} else {
		return false;
	}
}

void UserController::save() {

}

void UserController::saveAs(char* dest) {

}

void UserController::displayPromtp() {
	std::cout << "Please use open/save/saveas/close/exit/print/edit\n";
}

bool UserController::isFileOpen() {
	return fileOpened;
}

void UserController::setFileOpen(bool value) {
	fileOpened = value;
}
