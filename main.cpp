#include <iostream>

using namespace std;

int main()
{
	string name;
	int age;

	cout << "Hi, what's your name?" << endl;
	cin >> name;

	cout << name << " what is your age?" << endl;
	cin >> age;

	if( age > 0 && age < 12 )
		cout << "Hey kid!" << endl;
	if( age < 18 && age > 13 )
		cout << "I hope you're enjoying highschool!" << endl;
	else
		cout << "Oh, you're an adult. Nice to meet you." << endl;

	return 0;
}
