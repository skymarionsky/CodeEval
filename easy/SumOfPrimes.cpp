#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num)
{
	if (num == 2) return true;
	if(num%2 == 0)return false;
	for (int i = 3; i*i<=num; i+=2){
		if (num%i == 0) return false;
	}
	return true;
}

int main(int argc, const char * argv[])
{
	int total = 0;
	int cnt = 0;
	int i = 2;
	while (cnt<1000){
		if (isPrime(i)){
			total += i;
			cnt++;
//			cout << cnt << ':' << i << endl;
		}
		i++;
	}
	cout << total << endl;
	return 0;
}