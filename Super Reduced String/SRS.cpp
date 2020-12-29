#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main() {
	string s,ts,us;
	getline(cin, s);
	int i=0;
	
	
	
	while(i!=s.length()) {
		if(s[i]==s[i+1]){
			i=i+2;
		}
		else{
			ts= ts+s[i];
			i++;
		}
		
	}
	
	
	if(ts== "" ){
		cout<<endl<<"Empty String!";
	}else{
			cout<<endl<<"Finally  "<<ts;
	}
	
}
