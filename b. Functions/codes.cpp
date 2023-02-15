// a. Write a function to add 2 numbers

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

// b. Find max of 3 numbers

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

// c. Counting from 1 to n

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

// d. Students and grade problem

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

// e. Sum of even no upto n

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

// f. Area of circle

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

// g. Find no is even or odd

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

// h. Find factorial of number

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

// i. Check no is prime or not

#include<iostream>

using namespace std;

void isPrime(int a){
  
}

int main(){
  int n;
  cout<<"enter n:"<<endl;
  cin>>n;
  isPrime(n);
  return 0;
}
