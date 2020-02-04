#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	char characters[] = "zxcvbnmasdfghjklqwertyuiopZXCVBNMASDFGHJKLQWERTYUIOP123456789 !@#$%^&*()";
	string password;
	int lenght, randNum;


	cout << "Enter the desired lenght of your password." << endl;
	cin >> lenght;

	srand(time(NULL));
	cout << "Random Password:";
	for (int i = 1; i <= lenght; i++)
	{
		randNum = rand() % 73 + 1;
		cout << "" << characters[randNum];
	}
	cout<<""<<endl;
	cout << "Stay Safe!" << endl;
	system("pause");

	return 0;
}