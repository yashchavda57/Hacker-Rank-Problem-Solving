#include <iostream>
using namespace std;
int main(){
	int a[3];
	int b[3];
	int pointA=0;
	int pointB=0;
	int equal=0;
	for(int i=0;i<3;i++){
		cin >> a[i];
	}
	
	for(int i=0;i<3;i++){
		cin >> b[i];
	}
	for(int i=0;i<3;i++){
		if(a[i]>b[i])
			pointA++;
		else if (a[i]<b[i])
			pointB++;
		else
			equal++;		
	}
	
	cout << pointA << " " << pointB;
}
