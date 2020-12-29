#include<iostream>
#include<string>
using namespace std;
int main(){
	int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
	int typeInt;
	double typeDouble;
	double final;
	string str;
	scanf("%d",&typeInt);
	cin >> typeDouble;
	cin.ignore();
	getline(cin, str);
	cout << i + typeInt<< endl;
	cout << d + typeDouble << endl;
	cout << s + str;
}
