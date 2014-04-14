#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

vector<string> split(const string &str, char delim)
{
	istringstream iss(str);
	string tmp;
	vector<string> res;
	while (getline(iss, tmp, delim)) res.push_back(tmp);
	return res;
}

void run(int x, int p1, int p2)
{
	p1 = (x & (1 << (p1 - 1))) >> (p1-1);
	p2 = (x & (1 << (p2 - 1))) >> (p2-1);

	if (p1 == p2){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
	

}

int main(int argc, const char* argv[])
{
	/*cout << argv[1] << endl;*/
	string linebuffer;
	ifstream file;
	file.open(argv[1]);
	vector<string> lines;

	while (file && getline(file, linebuffer)){
		if (linebuffer.length() == 0) continue;
		lines = split(linebuffer, ',');

		int x = stoi(lines[0]);
		int p1 = stoi(lines[1]);
		int p2 = stoi(lines[2]);

		run(x, p1, p2);

	}

	return 0;
}