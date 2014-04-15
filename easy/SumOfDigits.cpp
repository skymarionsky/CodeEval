#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void run(string str)
{
	int t = 0;
	for (string::iterator it = str.begin(); it != str.end(); it++){
		t += (int)(*it - '0');
	}
	cout << t << endl;
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