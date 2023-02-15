// => a. Initialize array with -1

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

// => b. Find a no in an array

// #include<iostream>

// using namespace std;

// bool find(int arr[], int size, int key) {
// 	for(int i=0; i<size; i++) {
// 		if(arr[i] == key){
// 			return true;
// 		}
// 	}
// 	return false;
// }

// int main(){
// 	int size = 5;
// 	int arr[size] = {1,3,5,7,8};
// 	cout << "Enter the key to find " << endl;
// 	int key;
// 	cin  >> key;

// 	if(find(arr,size, key)) {
// 		cout << "Found " << endl;
// 	}
// 	else {
// 		cout << "not Found " << endl;
// 	}
// 	return 0;
// }

// => c. Count 0s and 1s in array

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