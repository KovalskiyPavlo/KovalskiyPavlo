#ifndef matrix_h__ 
#define matrix_h__ 
#include <iostream>
#include <iomanip> 
using namespace std;
template<class T>
class Matrix
{
private:
    T** m_iArr;
    int size_row;
    int size_col;
public:
    Matrix();
    ~Matrix();
    void init_matrix();
    int count_regretion();

};
template <class T>
Matrix<T>::Matrix()
{
    size_col = 0;
    size_row = 0;
    m_iArr = new T * [size_row];
    for (int i = 0; i < size_row; i++)
    {
        m_iArr[i] = new T[size_col];
        for (int j = 0; j < size_col; j++)
        {
            m_iArr[i][j] = 0;

        }

    }

}
template<class T>
Matrix<T>::~Matrix()
{
    for (int j = 0; j < size_row; j++)
    {
        delete m_iArr[j];

    }
    delete[] m_iArr;

}
template<class T>
void Matrix<T>::init_matrix()
{
    if (&m_iArr != 0)
    {
        for (int j = 0; j < size_row; j++)
        {
            delete m_iArr[j];

        }
        delete[] m_iArr;

    }
    cout << "������ ʳ������ �����:";
    cin >> size_row;
    cout << "������ ʳ������ ��������:";
    cin >> size_col;
    m_iArr = new T * [size_row];
    for (int i = 0; i < size_row; i++)
    {
        m_iArr[i] = new T[size_col];
        for (int j = 0; j < size_col; j++)
        {
            m_iArr[i][j] = 0;

        }

    }
    cout << "������ ���� �������:" << endl;
    for (int i = 0; i < size_row; i++)
        for (int j = 0; j < size_col; j++)
        {
            cout << "a[" << i << "]" << "[" << j << "]" << "=";
            cin >> m_iArr[i][j];

        }

}
template<class T>
int Matrix<T>::count_regretion()
{
    int count_regretion = 0;
    int i = 0, j = 0, k[size_row], res;
    cout << "\n���� �������:\n";
    for (i = 0; i < size_row; i++)
    {
        k[i] = 0;  for (j = 0; j < size_col; j++)
        {
            cout << setw(4) << m_iArr[i][j];
        }
        cout << endl;

    }
    for (i = 0; i < size_row; i++)
    {
        for (j = 0; j < size_col - 1; j++)
        {
            if (m_iArr[i][j] != m_iArr[i][j + 1])     k[i] += 1;

        }
    }
    res = k[0]; for (i = 0; i < size_row; i++)
    {
        if (res <= k[i])
        {
            res = k[i];   count_regretion = i + 1;
        }

    }
    cout << "���������:\n";
    cout << "\n�������� ���� � ��������� ����� ����� �������� ��������� � ����� �" << count_regretion << endl;
    cout << "\n�������:\n����� �������� ��������� � ����� 1" << endl;
    return 0;

}
#endif

