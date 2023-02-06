# Functions

## Write a function to add 2 numbers

```cpp
#include<iostream>

using namespace std;

int add(int a, int b){
  int result = a + b;
  return result;
}

int main(){
    int a,b;
    cout<<"Enter a"<<endl;
    cin>>a;
    cout<<"Enter b"<<endl;
    cin>>b;
    int sum = add(a,b);
    cout<<"addition of a amd b is: "<<sum<<endl;
    return 0;
}
```

## Find max of 3 numbers

```cpp
#include<iostream>

using namespace std;

int findMax(int num1, int num2, int num3) {
	if(num1 > num2 && num1 > num3) {
		return num1;
	}
	else if(num2 > num1 && num2 > num3) {
		return num2;
	}
	else {
		return num3;
	}
}

int main(){
	int a,b,c;
	cin >> a >> b >> c;

	int maximumNumber = findMax(a,b,c);
	cout << maximumNumber << endl;
  return 0;
}
```

## Counting from 1 to n

```cpp
#include<iostream>

using namespace std;

void printCounting(int n) {
	for(int i=1; i<=n; i++) {
		cout << i << " ";
	}
	cout << endl;
}

int main(){
	int n;
	cout << "Enter the value of n" << endl;
	cin >> n;

	//n is argument
	printCounting(n);
  return 0;
}
```

## students and grade problem

```cpp

```
