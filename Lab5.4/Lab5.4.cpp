#include <iostream>
#include <Windows.h>

using namespace std;

double S1(const int i, double t);
double S2(const int i, const int n, double t);
double S3(const int i);
double S4(const int i, const int n );
double S5(const int n);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int  n;

    cout << "������ �������� 'N':"; cin >> n;

    double a = S1(n, 0);
    double b = S2(0, n, 0);
    double c = S3(n);
    double d = S4(0, n);
    double f = S5(n);

    cout << "1)����������� �����, �������� ��������� � ����������� �������� �����: " << a << endl;
    cout << "2)����������� �����, �������� ��������� � ����������� �������� ������: " << b << endl;
    cout << "3)����������� �����, �������� ��������� � ����������� �������� �����: " << c << endl;
    cout << "4)����������� �����, �������� ��������� � ����������� �������� ������: " << d << endl;
    cout << "5)����������� �����: " << f << endl;

    return 0;
}

double S1( const int i, double t)
{
    t+= cos(sin(i)) / (1 + sin(i) * 1.0 * sin(i));
    if (i <= 0)
        return t;
    else
        return S1( i - 1, t);
}
double S2(const int i, const int n, double t)
{
    t += cos(sin(i)) / (1 + sin(i) * 1.0 * sin(i));
    if (i >= n)
        return t;
    else
        return S2(i + 1,n, t);
}
double S3(const int i)
{
    if (i < 0)
        return 0;
    else
        return cos(sin(i)) / (1 + sin(i) * 1.0 * sin(i)) + S3(i - 1);
}
double S4(const int i, const int n)
{
    if (i > n)
        return 0;
    else
        return cos(sin(i)) / (1 + sin(i) * 1.0 * sin(i)) + S4(i+1, n);
}
double S5(const int n)
{
    double s = 0;
    for (int i = 0; i <= n; i++)
        s += cos(sin(i)) / (1 + sin(i) * 1.0 * sin(i));
    return s;
}
