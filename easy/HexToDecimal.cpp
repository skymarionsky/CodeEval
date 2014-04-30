#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

void run(string str)
{
	cout << stoi(str, nullptr, 16) << endl;
}

int main(int argc, const char* argv[])
{
	ifstream file(argv[1]);
	string linebuffer;
	vector<string> tmp;

	while (file && getline(file, linebuffer)){
		run(linebuffer);
	}

	return 0;
}