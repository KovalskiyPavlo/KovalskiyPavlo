#include <iostream>
#include <string>
using namespace std;

class CBrowser
{
public:
	CBrowser();
	CBrowser(std::string adress, double height, double width, double inSpeed, double outSpeed)
	{
		set_PageAdress(adress);
		set_PageHeight(height);
		set_PageWidth(width);
		set_downloadSpeed(inSpeed);
		set_outloadSpeed(outSpeed);
	}
	~CBrowser();
	void set_PageAdress(std::string adress)
	{
		currentPageAdress = adress;
	}
	void set_PageHeight(double height)
	{
		PageHeight = height;
	}
	void set_PageWidth(double width)
	{
		PageWidth = width;
	}
	void set_downloadSpeed(double inSpeed)
	{
		downloadSpeed = inSpeed;
	}
	void set_outloadSpeed(double outSpeed)
	{
		outloadSpeed = outSpeed;
	}

	std::string get_PageAdress()
	{
		return currentPageAdress;
	}
	double get_PageHeight()
	{
		return PageHeight;
	}
	double get_PageWidth()
	{
		return PageWidth;
	}
	double get_downloadSpeed()
	{
		return downloadSpeed;
	}
	double get_outloadSpeed()
	{
		return outloadSpeed;
	}

	double GetSizeOfSpeed(double sizeofFile)
	{
		double time = 0.0;
		double speed;
		speed = get_downloadSpeed();
		time = sizeofFile / speed;
		return time;
	}

	double Download(double sizeofFile)
	{
		return GetSizeOfSpeed(sizeofFile);
	}
	double Outload(double sizeofFile)
	{
		double time = 0;
		double speed;
		speed = get_outloadSpeed();
		time = sizeofFile / speed;
		return time;
	}

	void Show_status()
	{
		cout << "Page adress: " << get_PageAdress() << endl;
		cout << "Page height: " << get_PageHeight() << endl;
		cout << "Page width: " << get_PageWidth() << endl;
		cout << "Page download speed: " << get_downloadSpeed() << endl;
		cout << "Page outload speed: " << get_outloadSpeed() << endl;
	}

private:
	string currentPageAdress;
	double PageHeight;
	double PageWidth;
	double downloadSpeed;
	double outloadSpeed;
};


void Start()
{
	CBrowser* browser1;
	CBrowser* browser2;
	double time[2];
	string pagePath;
	double sizeY;
	double sizeX;
	double speed_in;
	double speed_out;

	std::string pagePath2;
	double sizeY2;
	double sizeX2;
	double speed_in2;
	double speed_out2;

	cout << "Page 1 adress: ";
	getline(cin, pagePath);
	cout << "Page 1 height: ";
	cin >> sizeX;
	cout << "Page 1 width: ";
	cin >> sizeY;
	cout << "Page 1 download speed: ";
	cin >> speed_in;
	cout << "Page 1 outload speed: ";
	cin >> speed_out;
	browser1 = new CBrowser(pagePath, sizeX, sizeY, speed_in, speed_out);
	getchar();
	cout << endl;
	cout << "Page 2 adress: ";
	getline(cin, pagePath2);
	cout << "Page 2 height: ";
	cin >> sizeX2;
	cout << "Page 2 width: ";
	cin >> sizeY2;
	cout << "Page 2 download speed: ";
	cin >> speed_in2;
	cout << "Page 2 outload speed: ";
	cin >> speed_out2;
	browser2 = new CBrowser(pagePath2, sizeX2, sizeY2, speed_in2, speed_out2);
	cout << endl;
	time[0] = browser1->Download(500.8);
	cout << "Page 1 time to download 500.8 Mb file : " << time[0] << endl;
	time[1] = browser1->Download(345.6);
	cout << "Page 2 time to download 345.6 Mb file : " << time[1] << endl;
	cout << endl;
	time[0] = browser1->Outload(500.8);
	cout << "Page 1 time to outload 500.8 Mb file : " << time[0] << endl;
	time[1] = browser1->Outload(345.6);
	cout << "Page 2 time to outload 345.6 Mb file : " << time[1] << endl;
	cout << endl;
	cout << "Page 1 status : " << endl;
	browser1->Show_status();
	cout << endl;
	cout << "Page 2 status : " << endl;
	browser2->Show_status();
}
int main()
{
	Start();
	system("pause");
	return 0;
}
