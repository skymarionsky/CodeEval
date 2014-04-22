#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

vector<string> split(const string& str, char delim)
{
	istringstream iss(str);
	string tmp;
	vector<string> res;
	while (getline(iss, tmp, delim))res.push_back(tmp);
	return res;
}

void run(string str, char target)
{
	for (int i = 0; str[i] != '\0'; i++){
		if (str[i] == target){
			cout << i << endl;
			return;
		}
	}
	cout << -1 << endl;
}

int main(int argc, const char* argv[])
{
	ifstream file(argv[1]);
	string linebuffer;
	vector<string> tmp;

	while (file && getline(file, linebuffer)){
		if (linebuffer.length() == 0) continue;
		tmp = split(linebuffer, ',');
		run(tmp[0],tmp[1][0]);
	}

	return 0;
}