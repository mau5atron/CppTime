#include <iostream>

using namespace std;

int num { 300 }; // global variabled - declared outside any class or function

void global_example(){
	// uses the global variable when there is no variable 
	cout << "\nGlobal num is: " << num << " in global_example - start" << endl;
	num *= 2;
	cout << "Global num is: " << num << " in global_example - end" << endl;
}

void local_example(int x){
	int num {1000}; // local to local example
	cout << "\nLocal num is: " << num << " in local example - start" << endl;
	num = x;
	cout << "Local num is: " << num << " in local example - end" << endl;
	// num1 in main is not within scope - so it cant be used here
}

void static_local_example(){
	// local to static_local_example static - retains its value between calls
	// retains value after each function call rather than being reinitialized 
	static int num { 5000 }; 
	cout << "\nLocal static num is: " << num << " in static_local_example - start" << endl;
	num += 1000;
	cout << "Local static num is: " << num << " in static_local_example - end" << endl;
}

int main(void)
{
	int num {100}; // local to main
	int num1 {500}; // local to main
	
	cout << "Local num is: " << num << " in main." << endl; // 100
	
	{ // creates a new level of scope
		int num {200}; // local to this inner block
		cout << "Local num is: " << num << " in inner block in main." << endl; // 200
		cout << "Inner block in main can see out - num1 is: " << num1 << endl; // 500
	}
	
	cout << "Local num is: " << num << " in main." << endl; // 100
	
	local_example(10);
	local_example(20);
	
	global_example(); // actually modifies the global variable
	global_example();
	
	static_local_example();
	static_local_example();
	static_local_example();
	return 0;
}
