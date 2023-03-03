#include <iostream>
#include <fstream>
#include <cstdint>
#include <filesystem>
#include <sys/stat.h>

using namespace std;

int main() {
	struct stat status;
	if(stat("./src", &status) == 0) {
		cout << "Google";
	}
		
	return 0;
}
