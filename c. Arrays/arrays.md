# Arrays and Homework

## Contents =>

## Solutions =>

### a. Initialize array with -1

```cpp
#include <cstring>
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	int arr[] = a;
	memset(arr, 2, 5);
	cout << arr;
	return 0;
}
```

### b. Find a no in an array

```cpp
#include<iostream>

using namespace std;

bool find(int arr[], int size, int key) {
	for(int i=0; i<size; i++) {
		if(arr[i] == key){
			return true;
		}
	}
	return false;
}

int main(){
	int size = 5;
	int arr[size] = {1,3,5,7,8};
	cout << "Enter the key to find " << endl;
	int key;
	cin  >> key;

	if(find(arr,size, key)) {
		cout << "Found " << endl;
	}
	else {
		cout << "not Found " << endl;
	}
	return 0;
}
```

### c. Count 0s and 1s in array

```cpp
#include<iostream>

using namespace std;

int main(){
		int arr[] = {0,1,1,1,0,0,0,0,1,0,1,0,1,0,1, 2, 4 ,5, 7};

	int size = 19;

	int numZero = 0;
	int numOne = 0;

	for(int i=0; i<size; i++) {
		//if zero found, increment numZero
		if(arr[i] ==0 ) {
			numZero++;
		}
		//if One found, increment numOne
		if(arr[i] == 1) {
			numOne++;
		}
	}

	cout << "number of zeroes " << numZero << endl;
	cout << "number of ones "  << numOne << endl;
	return 0;
}
```

### d. Maximum num in an array

```cpp
#include<iostream>
#include<limits.h>

using namespace std;

int main(){
	int arr[] = {2,4,6,1,3,7,9,12,56,43,21};
	int size = 11;
	//initialse the maxi variable with the 
	//minimum possible integer value
	int maxi = INT_MIN;

	for(int i=0; i<size; i++) {
		if(arr[i] > maxi) {
			//found a number gretaer than maxi, update maxi
			maxi = arr[i] ;
		}
	}

	cout << "maximum number is " << maxi  << endl;
}
```

### e. Extreme print in array

```cpp
#include<iostream>

using namespace std;

int main(){
	int arr[8] = {10,20,30,40,50,60,70,80};
	int size = 8;

	int start = 0;
	int end = size-1;

	while(start <= end) {

		if(start == end ) {
			cout << arr[start] <<" ";
		}
		else {
			cout << arr[start] << " ";
			cout << arr[end] << " ";
		}

		start++;
		end--;
	}
	cout<<endl;
	return 0;
}
```

### f. Reverse an array

```cpp

```
