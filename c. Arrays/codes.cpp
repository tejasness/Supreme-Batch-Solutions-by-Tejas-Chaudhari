// a. initialize array with -1

// #include <cstring>
// #include <iostream>

// using namespace std;

// int main()
// {
// 	int arr[5];
// 	memset(arr, -1, sizeof(arr));
// 	for(int i = 0; i<5;i++){
//     cout<<arr[i]<<endl;
//   }
// 	return 0;
// }

// find a no in an array

#include<iostream>

using namespace std;

bool find(int arr[], int size, int key) {

	for(int i=0; i<size; i++) {
		if(arr[i] == key)
			return true;
		else
			return false;
	}
}

int main(){
	int arr[5] = {1,3,5,7,8};
	int size = 5;

	cout << "Enter the key to find " << endl;
	int key;
	cin  >> key;

	if(find(arr.size, key)) {
		cout << "Found " << endl;
	}
	else {
		cout << "not Found " << endl;
	}
	return 0;
}