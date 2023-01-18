#include <iostream>
#include <string> 

using namespace std;

int main()
{
	int result = 0; 
	string name; 
	getline(cin, name); 
	
	for (int i = 0; i < name.length(); i++) {
		if (name[i] == ' ') {
			result++;
		}
	}
	if (name[0] == ' ') 
		result--;
	if (name[name.length() - 1] == ' ') 
		result--;

	cout << result + 1 << endl;

	return 0;
}