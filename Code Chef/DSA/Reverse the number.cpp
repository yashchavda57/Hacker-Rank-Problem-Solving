#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n;
	int i;
	int j;
	cin >> n;
	int arr[n];
	int a[n];
	for(i=0;i<n;i++){
		cin >> arr[i];
	}
	for(i=0;i<n;i++){
		cout << arr[i];
		a[i]=arr[i];
		
	}
}
