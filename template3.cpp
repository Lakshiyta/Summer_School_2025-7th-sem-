#include <iostream>
using namespace std;

/*
	WA template function called TotalCount that takes an array, its size and a value of 
	any data type as parameters. The function should return the number of times the value
	appears in the array.		
*/

template <class T>

int TotalCount( T arr[], int size, T val ){
	
	int count = 0;
	for(int i=0; i<size; i++){
		
		if( arr[i] == val )
			count++;
	}
	
	return count;
}

int main(){
	
	{
		int arr[5] = {1, 1, 4, 7, 1};
		cout<<"Count is: "<< TotalCount(arr, 5, 1)<<endl;
	}
	{
		char arr[5] = {'a', 'i', 'p', 'i', 'o'};
		cout<<"Count is: "<< TotalCount(arr, 5, 'i');
	}
	
	return 0;
}
