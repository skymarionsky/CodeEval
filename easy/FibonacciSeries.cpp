#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int run(int n)
{
	if (n <= 0) return 0;
	if (n == 1) return 1;
	return run(n - 1) + run(n - 2);
}

int main(int argc, const char* argv[])
{
	/*cout << argv[1] << endl;*/
	string linebuffer;
	ifstream file;
	file.open(argv[1]);

	while (file && getline(file, linebuffer)){

		cout << run(stoi(linebuffer)) << endl;


	}

	return 0;
}