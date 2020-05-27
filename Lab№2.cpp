#include<iostream>
#include <cmath>
#include<fstream>
#include<iomanip>
using namespace std;
int main() {
	int choice;
	double Angle, SinRes, CosRes;
	while (true)
	{
		cout << "Show data – press 1" << endl;
		cout << "Write data - press 2" << endl;
		cout << "Exit – press 3" << endl;
		cin >> choice;
		if (choice == 1)
		{
			ifstream infile;
			infile.open("File.txt");
			if (!infile)
			{
				cout << "Cannot open file" << endl;
				return -1;
			}
			cout << "Angle" << setw(10) << "Sin" << setw(15) << "Cos\n";
			while (!infile.eof())
			{
				infile >> Angle;
				infile >> SinRes;
				infile >> CosRes;
				if (!infile.eof())
				{
					cout << Angle;
					cout.width(15);
					cout << SinRes;
					cout.width(15);
					cout << CosRes;
					cout << endl;
				}
			}
			infile.close();
		}
		if (choice == 2)
		{
			cin >> Angle;
			SinRes = sin(Angle);
			CosRes = cos(Angle);
			fstream outfile("File.txt", ios::app);
			if (!outfile)
			{
				cout << "Cannot open file" << endl;
				return -1;
			}
			outfile.setf(ios::left);
			outfile.width(15);
			outfile << Angle << ' ';
			outfile.width(15);
			outfile << SinRes << ' ';
			outfile.width(15);
			outfile << CosRes << endl;
			outfile.close();
		}
		if (choice == 3)
		{
			break;
		}
	}
	system("pause");
}
