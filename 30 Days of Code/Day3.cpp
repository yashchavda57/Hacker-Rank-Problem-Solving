#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n%2==1){
		cout<<"From if";
		cout << "Weird";
	}
	else{
		if(n<5){
			cout << "From else A ";
			cout << "Not Weird";
		}
		else if(n<21){
			cout << "From else B ";
			cout << "Weird";
		}
		else if(n>20){
			cout << "From else C ";
			cout << "Not Weird";
		}
	}
}
