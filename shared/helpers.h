/**
 * If the condition is true, print the message and exit the program
 * 
 * @param condition The condition to check. If it's true, the program will exit.
 * @param message The message to print if the condition is true.
 */
void errorIf(bool condition, std::string message) {
	if(condition) {
		std::cout << message << std::endl;
		exit(-1);
	}
}

/**
 * It takes a string, prepends "resources/" to it, and returns the result
 * 
 * @param name The name of the resource to load.
 * 
 * @return A string.
 */
std::string resource(std::string name) {
	return "resources/" + name;
}