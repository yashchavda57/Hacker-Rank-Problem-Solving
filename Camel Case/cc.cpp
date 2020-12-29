#include<iostream>
#include<cctype>
#include <string>
using namespace std;
int main(){
	string s;
	int upper=1;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if(isupper(s[i]))
			upper++;
	}
	cout<<upper;
}
