#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, const char* argv[])
{
	/*cout << argv[1] << endl;*/
	string linebuffer;
	ifstream file(argv[1],ios::binary|ios::ate);
	cout << file.tellg();

	return 0;
}