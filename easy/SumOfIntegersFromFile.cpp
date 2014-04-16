#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, const char* argv[])
{
	/*cout << argv[1] << endl;*/
	string linebuffer;
	ifstream file;
	file.open(argv[1]);

	int i = 0;
	while (file && getline(file, linebuffer)){

		i+= stoi(linebuffer);

	}

	cout << i;

	return 0;
}