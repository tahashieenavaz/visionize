#include <sys/stat.h>

/**
 * It takes a string, prepends "resources/" to it, and returns the result
 * 
 * @param name The name of the resource to load.
 * 
 * @return A string.
 */
std::string resource(std::string name) {
	std::string path = "./";
	struct stat status;

	for(int i = 0; i < 10; i++) {
		std::string currentPath = path + "resources/";
		if(stat(currentPath.data(), &status) == 0) {
			return currentPath + name;
		}
		path += "../";
	}

	return "";
}

/**
 * It prints the error message and exits the program
 * 
 * @param message The error message to display.
 */
void error(std::string message) {
	std::cout << message << std::endl;
	exit(-1);
}

/**
 * If the condition is true, print the message and exit the program
 * 
 * @param condition The condition to check. If it's true, the program will exit.
 * @param message The message to print if the condition is true.
 * 
 * @return A boolean value.
 */
void errorIf(bool condition, std::string message) {
	if(condition) {
		error(message);
	}
}
