#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
	int i;
	char str[26];
	int n;
	int temp;
	int value[26];
	char curr_char;
	int height[26];
	
	
	for(int i=97;i<123;i++){
		cin >> value[i];
	}
	
	
	cin >> str ;
	
	n = strlen(str) ;
	
	temp = n;
	
	while(n != (-1)){
		curr_char = str[n];
		
		height[n] = value[int(curr_char)];
		n--;
	}
	
		for(int i = 1;i < temp; ++i)
		    {
		       // Change < to > if you want to find the smallest element
		       if(height[0] < height[i])
		           height[0] = height[i];
		    }
		    
		    cout << height[0]*temp;
	
	
}
