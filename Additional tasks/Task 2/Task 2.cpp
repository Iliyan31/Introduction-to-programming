
#include <iostream>
#include <string>
//#include <windows.h>
#include <map>

using namespace std;


class Members {
public:
	string Name; 
	string school;
	int Age;

	void Introduction() {
		cout << "Name of the student is - " << Name << endl;
	}
};

int main(){

	Members student1;
	student1.Age = 15;
	student1.Name = "Iliyan";
	student1.Introduction();

	return 0;
}


