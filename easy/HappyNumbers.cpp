#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <math.h>
using namespace std;

void run(string str,vector<int> stack)
{
	int sum = 0;
	for (unsigned int i = 0; i < str.length(); i++){
		int tmp = str[i] - '0';
		sum += pow(tmp,2);
	}
	if (sum == 1){
		cout << 1 << endl;
		return;
	}
	for (vector<int>::iterator it = stack.begin(); it != stack.end(); it++){
		if (sum == *it){
			cout << 0 << endl;
			return;
		}
	}
	stack.push_back(sum);
	stringstream ss;
	ss << sum;
	run(ss.str(),stack);
}

int main(int argc, const char* argv[])
{
	ifstream file(argv[1]);
	string linebuffer;
	vector<int> stack;

	while (file && getline(file, linebuffer)){
		run(linebuffer,stack);
	}

	return 0;
}