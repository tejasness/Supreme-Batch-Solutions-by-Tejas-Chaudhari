# Functions

## Contents =>

[a. Write a function to add 2 numbers](#a-write-a-function-to-add-2-numbers)

[b. Find max of 3 numbers](#b-find-max-of-3-numbers)

[c. Counting from 1 to n](#c-counting-from-1-to-n)

[d. Students and grade problem](#d-students-and-grade-problem)

[e. Sum of even no upto n](#e-sum-of-even-no-upto-n)

[f. Area of circle](#f-area-of-circle)

[g. Find no is even or odd](#g-find-no-is-even-or-odd)

[h. Find factorial of number](#h-find-factorial-of-number)

[i. Check no is prime or not](#i-check-no-is-prime-or-not)

[j. Print all prime no from 1 to n](#j-print-all-prime-no-from-1-to-n)

<br>

## Solutions =>

### a. Write a function to add 2 numbers

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

### b. Find max of 3 numbers

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

### c. Counting from 1 to n

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

### d. Students and grade problem

```cpp
#include<iostream>

using namespace std;

char getGrade(int marks) {

	switch(marks/10){
		case 10 : return 'A'; break;
		case 9  : return 'A'; break;
		case 8  : return 'B'; break;
		case 7  : return 'C'; break;
		case 6  : return 'D'; break;
		default: return 'E';
	}
}

int main(){
  int marks;
	cout << "Enter the marks: " << endl;
	cin >> marks;

	char finalGrade = getGrade(marks);
	cout << finalGrade << endl;
  return 0;
}
```

### e. Sum of even no upto n

```cpp
#include<iostream>

using namespace std;

int getEvenSum(int n) {
	int sum = 0 ;
	for(int i = 2; i<=n; i = i + 2) {
		sum = sum + i;
	}
	return sum;
}

int main(){
	int n;
	cout << "Enter the value of n " << endl;
	cin >> n;
	int ans = getEvenSum(n);
	cout << "Sum of even no upto "<<n<<" is " << ans << endl;
  return 0;
}
```

### f. Area of circle

```cpp
#include<iostream>

using namespace std;

float areaOfCircle(float radius){
  return 3.14*radius*radius;
}

int main(){
  int r;
  cout<<"Enter radius:"<<endl;
  cin>>r;
  float area = areaOfCircle(r);
  cout<<"Area of Circle is: "<<area<<endl;
}
```

### g. Find no is even or odd

```cpp
#include<iostream>

using namespace std;

void isEvenOrOdd(int no){
  if(no%2==0){
    cout<<"No is even"<<endl;
  }
  else{
    cout<<"No is Odd"<<endl;
  }
}

int main(){
  int n;
  cout<<"Enter no"<<endl;
  cin>>n;
  isEvenOrOdd(n);
  return 0;
}
```

### h. Find factorial of number

```cpp
#include<iostream>

using namespace std;

void factorial(int n){
  int a = 1;
  for(int i=1;i<=n;i++){
    a = a*i;
  }
  cout<<"Factorial of no is: "<<a<<endl;
}

int main(){
  int n;
  cout<<"Enter no:"<<endl;
  cin>>n;
  factorial(n);
  return 0;
}
```

### i. Check no is prime or not

```cpp

```

### j. Print all prime no from 1 to n

```cpp

```
