#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{

	string line;
	char state = '\0';

	ofstream fi ;
	fi.open("multi3.txt");

	ifstream file;
	file.open( "multi2.txt", ios::in );

	if (file.good())
	{
		while (!file.eof())
		{
			if ( getline( file, line ) ) {

			if (line.at(1) != state)
			{
				state = line.at(1);
				fi << state << ":\n";
			}

			fi << line.at(0) << " " << line.at(4) << " " << line.at(6) << " " << line.at(5) << "\n";

			cout << line << " " << state <<  "\n";}
		}
		file.close();
	}
	fi.close();
	return 0;
}
