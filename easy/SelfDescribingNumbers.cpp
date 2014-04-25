#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <math.h>
using namespace std;

void run(string str)
{
	int res[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	for (int i = 0; str[i] != '\0'; i++){
		int tmp = str[i] - '0';
		res[tmp]++;
	}
	for (int i = 0; str[i] != '\0'; i++){
		int tmp = str[i] - '0';
		if (res[i] != tmp){
			cout << '0' << endl;
			return;
		}
	}
	cout << '1' << endl;
}

int main(int argc, const char* argv[])
{
	ifstream file(argv[1]);
	string linebuffer;

	while (file && getline(file, linebuffer)){
		run(linebuffer);
	}

	return 0;
}