#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	
	int a = stoi(argv[1]);
	cout << "You have entered " << argc << " arguments:" << "\n";
  
    cout << sizeof(argv[1]) << " The number is " << a << "\n";
  
    return 0;
}
	
