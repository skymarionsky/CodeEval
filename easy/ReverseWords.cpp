#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
using namespace std;

vector<string> split(const string &str, char delim)
{
	istringstream iss(str);
	string tmp;
	vector<string> res;
	while (getline(iss, tmp, delim)) res.push_back(tmp);
	return res;
}

int main(int argc, const char *argv[])
{
	string linebuffer;
	ifstream file;
	file.open(argv[1]);
	vector<string> lines;
	
	while (file && getline(file, linebuffer)){
		if (linebuffer.length() == 0) continue;
		lines = split(linebuffer, ' ');
		
		for (vector<string>::iterator it = lines.end()-1; it != lines.begin(); it--){
			if (it < lines.end()-1) cout << ' ';
			cout << *it;
		}
		
		cout << ' ' << *lines.begin() << endl;
	}
}