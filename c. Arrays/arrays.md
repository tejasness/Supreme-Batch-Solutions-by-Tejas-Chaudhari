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

```
