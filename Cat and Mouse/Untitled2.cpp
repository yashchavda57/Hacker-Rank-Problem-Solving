#include <string>;
#include <stdio.h>;
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int n;
	string result;
	int pCatA,pCatB,pMouse;
	
	
	
	cin >> n;
	//Instance 1
	while ( n > 0 )
	{			
	cin >> pCatA >> pCatB >> pMouse ;
	
	if( abs((pCatA-pMouse)) < abs((pCatB - pMouse))){
		result.append("Cat A \n");
	}	
	else if(abs((pCatA-pMouse)) == abs((pCatB - pMouse)) ){
		result.append("Mouse C \n");
	}
	else{
		result.append("Cat B \n");
	}
	
	n--;
	}
	
	cout << result;
}
