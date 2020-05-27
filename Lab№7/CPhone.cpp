#define _CRT_SECURE_NO_WARNINGS
#include "CPhone.h"

CPhone::CPhone() : CDevice()
{
	cout << "CAutoRacer Default Constructor" << endl;
	m_PhoneName = new char[20];
	strcpy(m_PhoneName, "No name");
}
CPhone::CPhone(char* creatorName, char* phoneName) : CDevice(creatorName)
{
	cout << "CPhone Constructor" << endl;
	m_PhoneName = new char[strlen(phoneName) + 1];
	strcpy(m_PhoneName, phoneName);
}
CPhone::CPhone(const CPhone& obj) : CDevice(obj)
{
	cout << "CPhone Copy Constructor" << endl;
	m_PhoneName = new char[strlen(obj.m_PhoneName) + 1];
	strcpy(m_PhoneName, obj.m_PhoneName);
}
CPhone::~CPhone()
{
	cout << "CPhone Destructor" << endl;
	delete[] m_PhoneName;
}
void CPhone::ShowProperty()
{
	cout << "Phone name: " << m_PhoneName << endl;
}
void CPhone::ShowFullInformation()
{
	cout << "My name is " << m_CreatorName << ", my weight is " <<
		m_Weight << " kg" << endl;
	ShowProperty();
	cout << "-------------------------" << endl;
}
CPhone& CPhone::operator=(CPhone& obj)
{
	if (this != &obj)
	{
		cout << "CPhone operator=" << endl;
		delete[] m_PhoneName;
		m_CreatorName = new char[strlen(obj.m_PhoneName) + 1];
		strcpy(m_PhoneName, obj.m_PhoneName);
		CDevice::operator=(obj);
	}
	return *this;
}
void CPhone::Call(const char* number)
{
	cout << "Calling number " << number << endl;
	cout << "-------------------------" << endl;
}
void CPhone::Rington(const char* rington)
{
	cout << "Playing rington " << rington << endl;
	cout << "-------------------------" << endl;
}
