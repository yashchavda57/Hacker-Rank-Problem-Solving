#include<iostream>
#include<array>
using namespace std;
int main(){
	int a[100],n,positive=0,negative=0,zero=0;
	float pp,np,zp;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]>0){
			++positive;
		}
		else if(a[i]<0){
			++negative;
		}
		else{
			++zero;
		}
	}
	
	
	pp =(float)positive/n;
	cout<< pp<<endl;
	
	np = (float)negative/n ;
	cout<< np << " "<< endl;
	
	zp = (float)zero/n;
	cout<<zp<< " "<< endl;
		
}
