#include "CDevice.h"
#include <cstring>
#ifndef MotoRacer
#define MotoRacer
class CComputer : virtual public CDevice
{
protected:
	char* m_ComputerName;
public:
	CComputer();
	CComputer(char* name, char* computerName);
	CComputer(const CComputer& obj);
	virtual ~CComputer();
	void ShowProperty();
	virtual void ShowFullInformation();
	void PlayGame(const char*);
	void UpdateOS(double version);
	CComputer& operator=(CComputer&);
};
#endif
