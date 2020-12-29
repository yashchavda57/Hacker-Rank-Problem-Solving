#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main(){
	int n, ld=0, rd=0,result;
	int a[100][100];
	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i == j){
				ld += a[i][j];
			}
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if((i+j)==(n-1)){
				rd+= a[i][j];
			}
		}
	}
	result = ld - rd;
	cout << abs(result);
	
	
}
