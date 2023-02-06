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