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