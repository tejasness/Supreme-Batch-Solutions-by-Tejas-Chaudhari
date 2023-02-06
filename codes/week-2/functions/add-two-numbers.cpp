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