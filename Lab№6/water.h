#ifndef GRANDPARENT_H 
#define GRANDPARENT_H 
#include <iostream> 
#include <string> 
using namespace std;
class Water {
protected:
    int minDepth;
    int maxDepth;
    int square;
    int volume;
public:
    Water() {
        minDepth = 2;
        maxDepth = 20;
        square = 1000;
        volume = 50000;

    }
    ~Water() {}
    void SetMinDepth(int c)
    {
        minDepth = c;
        if (minDepth < 0)
            minDepth = 0;

    }
    int GetMinDepth()
    {
        return minDepth;
    }
    void SetMaxDepth(int c)
    {
        maxDepth = c;
        if (maxDepth < 0)
            maxDepth = 0;

    }
    int GetMaxDepth()
    {
        return maxDepth;

    }
    void SetSquare(int c)
    {
        square = c;
        if (square < 0)
            square = 0;

    }
    int GetSquare() {
        return square;

    }
    void SetVolume(int c)
    {
        volume = c;
        if (volume < 0)
            volume = 0;

    }
    int GetVolume() {
        return volume;

    }
    void Print()
    {
        cout << "Мінімальна Глибина: " << GetMinDepth() << "м." << endl;
        cout << "Максимальна Глибина: " << GetMaxDepth() << "м." << endl;
        cout << "Площа: " << GetSquare() << "м^2" << endl;
        cout << "Об'єм: " << GetVolume() << "м^3" << endl;

    }
    
};
#endif
