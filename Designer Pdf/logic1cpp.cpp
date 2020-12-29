#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
	int arr_char[26];
	int i;
	int value[26];
	int n;
	string str;
	char curr_char;
	int height[26];
	int temp;
	
	// char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	
//	//length of string
//	cout << "Enter the length of string";
//	cin >> n;
//	int temp = n;
	//Enter 26 values
	cout << "Enter 26 values:"<<endl;
	for(int i=97;i<123;i++){
		cin >> value[i];
	}
	
	//Enter the string
//	cout << "Enter the String"<<endl;
//	for(int i=1;i<=26;i++){
//		cin >> str[i];	
//	}
//	
	
	getline(cin,str);
	n = str.length();
	temp = n;
	
	while(n != 0){
	// if(str[n] == a || b ||c|| d|| e|| f|| g|| h|| i|| j|| k|| l|| m|| n|| o|| p|| q|| r|| s|| t|| u|| v|| w|| x|| y|| z );
	curr_char = str[n];
	cout << curr_char;
	height[n] = value[int(curr_char)];
	n--;
	}
	
//	cout << max(height[n])*n;
		
		for(i = 1;i < temp; ++i)
		    {
		       // Change < to > if you want to find the smallest element
		       if(height[0] < height[i])
		           height[0] = height[i];
		    }
		    
    cout << "Largest element = " << height[0]*temp;

} 	

