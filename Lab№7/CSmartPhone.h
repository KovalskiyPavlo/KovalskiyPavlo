#include "CPhone.h"
#include "CComputer.h"
#ifndef SMART
#define SMART
class CSmartPhone : public CPhone, CComputer
{
private:
	int m_Perfomance;
	int m_Password;
public:
	CSmartPhone();
	CSmartPhone(char* creatorName, char* computerName, char* phoneName, int perfomance, int password);
	CSmartPhone(const CSmartPhone& obj);
	virtual ~CSmartPhone();
	void ShowProperty();
	virtual void ShowFullInformation();
	CSmartPhone& operator=(CSmartPhone&);
	void UnlockWithPassword(int password);
	void FindInBrowser(const char*);
};
#endif

