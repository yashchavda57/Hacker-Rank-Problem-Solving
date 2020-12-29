#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib>
using namespace std;

int main(){
	char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int heights[26];
	string word;
	int ret;
	for (int i=0;i<26;i++){
		scanf("%d",&heights[i]) ;
	}
	scanf("%s",&word) ;
	
	for (int i=0;i<26;i++){
		letters[i] = heights[i];
	}
	
	for (int i=0;i<26;i++){
		printf("%d",letters[i]);
	}
	
	
	
}


