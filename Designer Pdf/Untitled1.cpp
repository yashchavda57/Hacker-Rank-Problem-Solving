#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string.h>
using namespace std;

int main(){
    int i;
    char str[26];
    int n;
    int temp;
    int value[26];
    char curr_char;
    int height[26];
    
    
    for(int i=97;i<=97+25;++i){
        cin >> value[i];
    }

    cin >> str ;
    n = strlen(str) ;
    temp = n;
    
    
    
    for(int i=0;i<n;i++){
    	curr_char=str[i];
    	height[i] = value[int(curr_char)];
		
	}
	
	for(int i = 1;i < n; ++i)
            {
               if(height[0] < height[i])
                   height[0] = height[i];
            }
            
    cout << height[0]*temp;
    
}

