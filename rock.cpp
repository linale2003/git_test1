#include <iostream>

using namespace std;

int main(){
	char user,machine;
	char arr[size]={'r','s','p;};
	srand(time(NULL));
	int i = rand() %3;
	machine =arr[i];
	
	cout << "Enter r(rock), s(scissors) or p(paper): ";
	cin >> user;
	
	cout << machine << endl;
}
