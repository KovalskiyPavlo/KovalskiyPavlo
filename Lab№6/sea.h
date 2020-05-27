#include <iostream> 
#include <string>
#include "water.h" 
using namespace std;
class Sea :
    public Water
{
private:
    double saltPpm;
    string name;
    string country;
public:  Sea()
{
    saltPpm = 42;
    name = "BlackSea";
    country = "Ukraine";

}
      ~Sea() {}
      void SetSaltPpm(double ppm)
      {
          saltPpm = ppm;
      }
      double GetSaltPpm()
      {
          return saltPpm;
      }
      void SetName(string n)
      {
          name = name;

      }
      string GetName()
      {
          return name;

      }
      void SetCountry(string c)
      {
          country = c;

      }
      string GetCountry()
      {
          return country;

      }
      void Verify()
      {
          if (saltPpm < 0)    saltPpm = 0;
          if (saltPpm > 1000)    saltPpm = 1000;
          if (name == "")    name = "BlackSea";
          if (country == "")    country = "Ukraine";
      }
      void Show() {
          cout << "Назва Моря: " << GetName() << endl;
          cout << "Країна " << GetCountry() << endl;
          cout << "Солоність = " << GetSaltPpm() << " Проміле\n";

      }

};