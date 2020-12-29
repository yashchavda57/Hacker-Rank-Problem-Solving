#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
	int arr[10000];
	int n=10000 ;
	int i;
	int temp;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
		temp = i;
		if(arr[i]==42){
			for (i=0;i<temp;i++){
				cout << arr[i];
				cout <<endl;
			}
		}
	}
}

