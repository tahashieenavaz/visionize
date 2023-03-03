int error(std::string message) {
	std::cout << message << std::endl;
	return -1;
}

std::string resource(std::string name) {
	return "resources/" + name;
}
