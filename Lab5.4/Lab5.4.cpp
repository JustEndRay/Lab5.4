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

    cout << "Введіть значення 'N':"; cin >> n;

    double a = S1(n, 0);
    double b = S2(0, n, 0);
    double c = S3(n);
    double d = S4(0, n);
    double f = S5(n);

    cout << "1)Рекурсивний спуск, значення параметра в рекурсивних викликах спадає: " << a << endl;
    cout << "2)Рекурсивний спуск, значення параметра в рекурсивних викликах зростає: " << b << endl;
    cout << "3)Рекурсивний підйом, значення параметра в рекурсивних викликах спадає: " << c << endl;
    cout << "4)Рекурсивний підйом, значення параметра в рекурсивних викликах зростає: " << d << endl;
    cout << "5)Ітераційний спосіб: " << f << endl;

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
