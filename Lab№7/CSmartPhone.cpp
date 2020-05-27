#define _CRT_SECURE_NO_WARNINGS
#include "CSmartPhone.h"

CSmartPhone::CSmartPhone() : CDevice(), CPhone(), CComputer()
{
	cout << "CSmartPhone Default Constructor" << endl;
}
CSmartPhone::CSmartPhone(char* name, char* computerName, char* phoneName, int perfomance, int password) : CDevice(name), CPhone(name, phoneName), CComputer(name, computerName)
{
	m_Perfomance = perfomance;
	m_Password = password;
	cout << "CSmartPhone Constructor" << endl;
}
CSmartPhone::CSmartPhone(const CSmartPhone& obj) : CDevice(obj),
CPhone(obj), CComputer(obj)
{
	cout << "CSmartPhone Copy Constructor" << endl;
	this->m_Perfomance = obj.m_Perfomance;
}
CSmartPhone::~CSmartPhone()
{
	cout << "CSmartPhone Destructor" << endl;
}
void CSmartPhone::ShowProperty()
{
	cout << "Phone: " << m_PhoneName << " and Computer: " << m_ComputerName << endl;
	cout << "My perfomance is: " << m_Perfomance << "\%" << endl;
}
void CSmartPhone::ShowFullInformation()
{
	cout << "My name is " << m_CreatorName << ", my weight is " <<
		m_Weight << " kg" << endl;
	ShowProperty();
	cout << "-------------------------" << endl;
}
CSmartPhone& CSmartPhone::operator=(CSmartPhone& obj)
{
	if (this != &obj)
	{
		cout << "CSmartPhone operator=" << endl;
		CDevice::operator=(obj);
		CPhone::operator=(obj);
		CComputer::operator=(obj);
		this->m_Perfomance = obj.m_Perfomance;
		this->m_Password = obj.m_Password;
	}
	return *this;
}
void CSmartPhone::UnlockWithPassword(int password)
{
	{
		if (password == m_Password)
		{
			cout << "Unlocked" << endl;
			cout << "-------------------------" << endl;
		}
		else
		{
			cout << "Wrong password" << endl;
			cout << "-------------------------" << endl;
		}
	}
}
void CSmartPhone::FindInBrowser(const char* link)
{
	cout << "Opening page by link " << link << endl;
	cout << "-------------------------" << endl;
}
