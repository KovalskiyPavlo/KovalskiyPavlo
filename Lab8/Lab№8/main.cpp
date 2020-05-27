#include <iostream> 
#include <iomanip> 
#include "matrix.h"
using namespace std;
int main(void)
{
    setlocale(LC_CTYPE, "ukr");
    Matrix<int> m;
    m.init_matrix();
    m.count_regretion();
    system("pause");
    return 0;
}
