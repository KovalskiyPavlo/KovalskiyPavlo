#define _CRT_SECURE_NO_WARNINGS
#include "CComputer.h"

CComputer::CComputer() : CDevice()
{
	cout << "CComputer Default Constructor" << endl;
	m_ComputerName = new char[20];
	strcpy(m_ComputerName, "No name");
}
CComputer::CComputer(char* creatorName, char* computerName) : CDevice(creatorName)
{
	cout << "CComputer Constructor" << endl;
	m_ComputerName = new char[strlen(computerName) + 1];
	strcpy(m_ComputerName, computerName);
}
CComputer::CComputer(const CComputer& obj) : CDevice(obj)
{
	cout << "CComputer Copy Constructor" << endl;
	m_ComputerName = new char[strlen(obj.m_ComputerName) + 1];
	strcpy(m_ComputerName, obj.m_ComputerName);
}
CComputer::~CComputer()
{
	cout << "CComputer Destructor" << endl;
	delete[] m_ComputerName;
}
void CComputer::ShowProperty()
{
	cout << "Computer name:" << m_ComputerName << endl;
}
void CComputer::ShowFullInformation()
{
	cout << "My name is " << m_CreatorName << ", my weight is " << m_Weight << " kg" << endl;
	ShowProperty();
	cout << "-------------------------" << endl;
}
CComputer& CComputer::operator=(CComputer& obj)
{
	if (this != &obj)
	{
		cout << "CComputer operator=" << endl;
		delete[] m_ComputerName;
		m_CreatorName = new char[strlen(obj.m_ComputerName) + 1];
		strcpy(m_ComputerName, obj.m_ComputerName);
		CDevice::operator=(obj);
	}
	return *this;
}
void CComputer::PlayGame(const char* game)
{
	cout << "Playing the game " << game << endl;
	cout << "-------------------------" << endl;
}
void CComputer::UpdateOS(double version)
{
	cout << "OS updated to version " << version << endl;
	cout << "-------------------------" << endl;
}
