#include "CDevice.h"
#include <cstring>
#ifndef PHONE
#define PHONE
class CPhone : virtual public CDevice
{
protected:
	char* m_PhoneName;
public:
	CPhone();
	CPhone(char* creatorName, char* phoneName);
	CPhone(const CPhone& obj);
	virtual ~CPhone();
	void ShowProperty();
	virtual void ShowFullInformation();
	void Call(const char*);
	void Rington(const char*);
	CPhone& operator=(CPhone&);
};
#endif
