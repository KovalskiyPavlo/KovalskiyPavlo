#define _CRT_SECURE_NO_WARNINGS
#include "CSmartPhone.h"
int main()
{
	setlocale(LC_CTYPE, "ukr");
	cout << "----- Creating objects -----" << endl;
	CPhone a1((char*)("Garold"), (char*)("Nomi"));
	a1.SetWeight(0.450);
	a1.ShowFullInformation();
	a1.Call("+38(073)-999-99-99");
	a1.Rington("Lil Peep - Switchblades");
	CComputer a2((char*)("Garold"), (char*)("Mac"));
	a2.SetWeight(2.5);
	a2.ShowFullInformation();
	a2.PlayGame("CS:GO");
	a2.UpdateOS(1.2);
	CSmartPhone a3((char*)("Garold"), (char*)("Mac"), (char*)("Meizu"), 75, 1234);
	a3.SetWeight(0.150);
	a3.ShowFullInformation();
	a3.UnlockWithPassword(1234);
	a3.UnlockWithPassword(2222);
	a3.FindInBrowser("http\\nulp.com.ua");
	CSmartPhone a4 = a3;
	a4.ShowFullInformation();
	CSmartPhone a5(a4);
	a5.ShowFullInformation();
	//------------------------------------------------------------------
	cout << "----- Creating reference -----" << endl;
	cout << "----- CDevice &ref1 = a1; -----" << endl;
	CDevice& ref1 = a1;
	ref1.ShowFullInformation();
	cout << "----- ref1 = a2; -----" << endl;
	ref1 = a2;
	ref1.ShowFullInformation();
	cout << "----- CDevice &ref2 = a2; -----" << endl;
	CDevice& ref2 = a2;
	ref2.ShowFullInformation();
	cout << "----- CDevice &ref3 = a2; -----" << endl;
	CDevice& ref3 = a3;
	ref3.ShowFullInformation();
	//------------------------------------------------------------------
	cout << "----- Creating dynamic objects -----" << endl;
	cout << "----- CDevice* ptr1 = new CPhone((char*)(\"Robert\"), (char*)(\"Simens\")) -----" << endl;
	CDevice* ptr1 = new CPhone((char*)("Robert"), (char*)("Simens"));
	ptr1->SetWeight(0.050);
	ptr1->ShowProperty();
	ptr1->ShowFullInformation();
	cout << "----- CDevice* ptr2 = new CComputer((char*)(\"Pit\"), (char*)(\"eMachines\")); -----" << endl;
	CDevice* ptr2 = new CComputer((char*)("Pit"), (char*)("eMachines"));
	ptr2->SetWeight(5.6);
	ptr2->ShowProperty();
	ptr2->ShowFullInformation();
	cout << "----- CDevice* ptr3 = new CSmartPhone((char*)(\"Jack\"), (char*)(\"Hp\"), (char*)(\"Nokia\"), 65); -----" << endl;
	CDevice* ptr3 = new CSmartPhone((char*)("Jack"), (char*)("Hp"), (char*)("Nokia"), 65, 4321);
	ptr3->SetWeight(0.225);
	ptr3->ShowProperty();
	ptr3->ShowFullInformation();
	cout << "----- CPhone *ptr4 = new CPhone((char*)(\"Top\"), (char*)(\"Xiaomi\")); -----" << endl;
	CPhone* ptr4 = new CPhone((char*)("Top"), (char*)("Xiaomi"));
	ptr4->SetWeight(0.125);
	ptr4->ShowProperty();
	ptr4->ShowFullInformation();
	cout << "----- CComputer *ptr5 = new CComputer((char*)(\"Doms\"), (char*)(\"SimpsonPC\")); -----" << endl;
	CComputer* ptr5 = new CComputer((char*)("Doms"), (char*)("SimpsonPC"));
	ptr5->SetWeight(4.3);
	ptr5->ShowProperty();
	ptr5->ShowFullInformation();
	cout << "----- CSmartPhone *ptr6 = new CSmartPhone((char*)(\"Vadym\"), (char*)(\"Dell\"), (char*)(\"Iphone\"),38); -----" << endl;
	CSmartPhone* ptr6 = new CSmartPhone((char*)("Vadym"), (char*)("Dell"), (char*)("Iphone"), 38, 1111);
	ptr6->SetWeight(0.185);
	ptr6->ShowProperty();
	ptr6->ShowFullInformation();
	//------------------------------------------------------------------
	cout << "delete ptr1 " << endl;
	delete ptr1;
	cout << "-------------------------" << endl << "delete ptr2 " <<
		endl;
	delete ptr2;
	cout << "-------------------------" << endl << "delete ptr3 " <<
		endl;
	delete ptr3;
	cout << "-------------------------" << endl << "delete ptr4 " <<
		endl;
	delete ptr4;
	cout << "-------------------------" << endl << "delete ptr5 " <<
		endl;
	delete ptr5;
	cout << "-------------------------" << endl << "delete ptr6 " <<
		endl;
	delete ptr6;
	cout << "-------------------------" << endl;
	system("pause");
	return 0;
}

