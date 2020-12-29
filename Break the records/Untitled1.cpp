// Breaking the record.
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	int array[1000];
	int min , max , maxc , minc;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>> array[i];
	}
	maxc = 1;
	minc = 1;
	max = array[0];
	min = array[0];
	
	for(int i=0;i<n;i++){
		if(array[i]>max){
			max = array[i];
			maxc++;
		}
		else if(array[i]<min){
			min = array[i];
			minc--;
		}
		else{
			continue;
		}
			
		
	}

	
	cout << abs(maxc-1)  << " " << abs(minc-1) ;
}
