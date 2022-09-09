#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;


int main()
{
	int iNumStudents;
	string sFirstStudent;
	string sLastStudent;
	string sName;
	int i;

	cout << "How many students are in the class? Must be a number between 1 and 25." << endl;
	cin >> iNumStudents;
	while (iNumStudents < 1 || iNumStudents > 25)
	{
		cout << "You entered a value lower then 1, or greater then 25. Please stay within the limit." << endl;
		cout << "How many students in the class?" << endl;
		cin >> iNumStudents;
	}
	for (i = 1; i <= iNumStudents; i++)
	{
		cout << "Enter name of student #" << i << endl;
		cin >> sName;
		if (i == 1)
		{
			sFirstStudent = sName;
			sLastStudent = sName;
		}
		else
		{
			if (sName < sFirstStudent)
			{
				sFirstStudent = sName;
			}
			else
			{
				if (sName > sLastStudent)
				{
					sLastStudent = sName;
				}
			}
		}
	}
	cout << "First student is: " << sFirstStudent << endl;
	cout << "Last student is: " << sLastStudent << endl;
	system("pause");
	return 0;
}


