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