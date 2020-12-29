using namespace std;
#include <iostream>

int main()
{
	int totalElementsInArray;
	int array[1000];
	int sum = 0;
	cin >> totalElementsInArray;
	for (int i = 0; i < totalElementsInArray; i++)
	{
		cin >> array[i];
	}
	for(int i=0; i< totalElementsInArray; i++){
		sum = sum + array[i];
	}
	cout << sum;
}
