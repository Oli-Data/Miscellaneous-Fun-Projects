
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


double testAverage(int t1, int t2, int t3, int t4);
char letterGrade(double avg);
bool question();

int main(){

int exam1,exam2,exam3,exam4;

do{
cout << "Exam #1" << setw(3) << " ";
cin >> exam1;
cout << "Exam #2" << setw(3) << " ";
cin >> exam2;
cout << "Exam #3" << setw(3) << " ";
cin >> exam3;
cout << "Exam #4" << setw(3) << " ";
cin >> exam4;

double grade = testAverage(exam1,exam2,exam3,exam4);

cout << "\n\nYour average is: " << setprecision(1) << fixed << testAverage(exam1,exam2,exam3,exam4) << " = " << letterGrade(grade);
}
while(question());

	return(0);
}



char letterGrade(double avg){

	if (avg >= 90 && avg <= 100){
	char result = 'A';
	return(result);
	}
	if (avg >= 80 && avg <= 89.9){
	char result = 'B';
	return(result);
	}
	if (avg >= 70 && avg <= 79.9){
	char result = 'C';
	return(result);
	}
	if (avg >= 60 && avg <= 69.9){
	char result = 'D';
	return(result);
	}
	else{
	char result = 'F';
	return(result);
	}
	return(0);
}



double testAverage(int t1, int t2, int t3, int t4) { double average = (t1 + t2 + t3 + t4)/ 4;

return (average);
}

bool question(){
string userResponse;
cout << "\nWould like to run again (y or n): ";
cin >> userResponse;
cout << endl;

if(userResponse == "Yes" || userResponse == "yes" || userResponse == "y" || userResponse == "Y"){ return(true);
}
  else{ return(false);
    }
return(0);
}
