#include <iostream> 
#include "water.h" 
#include "sea.h" 
using namespace std; int main() {
    setlocale(LC_CTYPE, "ukr");
    Water MyWater;
    Sea MySea;
    string country, name;  double ppm;
    int choice, mind, maxd, s, v;
    while (true) {
        cout << "Ввести Дані про Водойму – Натисніть 1\n";
        cout << "Ввести Дані про Море - Натисніть 2\n";
        cout << "Показати Дані - Натисніть 3\n";
        cout << "Вихід – Натисніть Будь Яку Іншу Клавішу\n";
        cin >> choice;
        if (choice == 1) {
            cout << "Введіть Мінімальну глибину\n";
            cin >> mind;
            cout << "Введіть Мксимальну глибину\n";
            cin >> maxd;
            cout << "Введіть Площу Водойми\n";
            cin >> s;
            cout << "Введіть Об'єм Водойми\n";
            cin >> v;
            MyWater.SetMinDepth(mind);
            MyWater.SetMaxDepth(maxd);
            MyWater.SetSquare(s);
            MyWater.SetVolume(v);
        }
        if (choice == 2) {
            cout << "Введіть Мінімальну глибину\n";
            cin >> mind;
            cout << "Введіть Мксимальну глибину\n";
            cin >> maxd;
            cout << "Введіть Площу Водойми\n";
            cin >> s;
            cout << "Введіть Об'єм Водойми\n";
            cin >> v;
            cout << "Введіть Назву Моря\n";
            cin >> name;
            cout << "Введіть Назву Країни\n";
            cin >> country;
            cout << "Введіть Солоність Моря\n";
            cin >> ppm;
            MySea.SetMinDepth(mind);
            MySea.SetMaxDepth(maxd);
            MySea.SetSquare(s);
            MySea.SetVolume(v);
            MySea.SetName(name);
            MySea.SetCountry(country);
            MySea.SetSaltPpm(ppm);
            MySea.Verify();
        }
        if (choice == 3) {
            cout << "Водойма:\n";
            MyWater.Print();
            cout << "----------------------\n";
            cout << "Море:\n";
            MySea.Print();
            MySea.Show();
        }
        if (choice > 3 || choice < 1)  break;
    }
    return 0;
}

