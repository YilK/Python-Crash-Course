#include <iostream>
using namespace std;
int main() {
	int a[10];
	for(int i=0;i<10;i++)
		a[i]=i;
	for(int i:a)
		cout<<i<<endl;
	return 0;
}