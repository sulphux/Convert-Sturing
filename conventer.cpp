#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{

	string line;
	char state = '\0';

	cout << "Turing machine (MT format) source path:\n";

	string path;

	cin >> path;

	ofstream fi ;
	fi.open("outputMachine.t");

	ifstream file;
	file.open( path, ios::in );

	if (file.good())
	{
		while (!file.eof())
		{
			if ( getline( file, line ) ) {Æ

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
	else
	{
		cout << "Can't open file to convert!\n";
		exit (1);
		}
	fi.close();
	return 0;
}
