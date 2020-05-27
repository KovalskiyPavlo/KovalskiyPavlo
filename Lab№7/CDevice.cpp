#define _CRT_SECURE_NO_WARNINGS
#include "CDevice.h"
CDevice::CDevice() : m_CreatorName(new char[20]), m_Weight(0)
{
	cout << "CDevice Default Constructor" << endl;
	strcpy(m_CreatorName, "No name");
}
CDevice::CDevice(char* creatorName)
{
	cout << "CDevice Constructor" << endl;
	m_CreatorName = new char[strlen(creatorName) + 1];
	strcpy(m_CreatorName, creatorName);
}
CDevice::CDevice(const CDevice& obj)
{
	cout << "CDevice Copy Constructor" << endl;
	m_CreatorName = new char[strlen(obj.m_CreatorName) + 1];
	strcpy(m_CreatorName, obj.m_CreatorName);
	m_Weight = obj.m_Weight;
}
CDevice::~CDevice()
{
	cout << "CDevice Destructor" << endl;
	delete[] m_CreatorName;
}
void CDevice::ShowProperty()
{
	cout << "I have no properties" << endl;
	cout << "-------------------------" << endl;
}
CDevice& CDevice::operator=(const CDevice& obj)
{
	if (this != &obj)
	{
		cout << "CDevice operator=" << endl;
		delete[] m_CreatorName;
		m_CreatorName = new char[strlen(obj.m_CreatorName) + 1];
		strcpy(m_CreatorName, obj.m_CreatorName);
	}
	return *this;
}
