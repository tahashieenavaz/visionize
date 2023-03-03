#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
    if(argc < 2) {
        cout << "Provide path";
        exit(0);
    }

    string filepath = "";
    for(int i = 1; i < argc - 1; i++) {
        filepath = filepath + argv[i] + '/';
    }
    filepath = filepath + argv[argc - 1];

    ifstream from("stud.txt", ios::binary);
    ofstream to("../src/" + filepath + ".cpp", ios::binary);

    to << from.rdbuf();
    return 0;
}