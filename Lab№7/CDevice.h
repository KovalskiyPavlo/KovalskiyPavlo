#pragma once
#ifndef DEVICE
#define DEVICE

#include <stdlib.h>
#include <iostream>
#include <cstring>
using namespace std;
class CDevice
{
protected:
	char* m_CreatorName;
	double m_Weight;
public:
	CDevice();
	CDevice(char* creatorName);
	CDevice(const CDevice& obj);
	virtual ~CDevice();
	inline void SetWeight(double w) { m_Weight = w; }
	double GetWeight() { return m_Weight; }
	void ShowProperty();
	virtual void ShowFullInformation() = 0;
	CDevice& operator=(const CDevice&);

};
#endif // !DEVICE

