#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

void run(string str)
{
	transform(str.begin(), str.end(), str.begin(), ::tolower);

	cout << str << endl;
}

int main(int argc, const char* argv[])
{
	/*cout << argv[1] << endl;*/
	string linebuffer;
	ifstream file;
	file.open(argv[1]);

	while (file && getline(file, linebuffer)){

		run(linebuffer);

	}

	return 0;
}