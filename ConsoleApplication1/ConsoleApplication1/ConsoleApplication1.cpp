#include <iostream>
#include <cmath>
using namespace std;

int i;
int g(int m,int a, int c) {
    return (a - m + c) % 10;
}
int f(int m, int a, int c) {
    if (m <= 9 && m >= 0) {
        return m;
    } else { 
        i++;
        cout << "i: " << i << "\n";
        return  g(m,a,c) * f(a,m - 1 - g(m,a,c),c) + m;
       
    }
}
int main()
{
    int m, a, c;
    cout << "m = "; cin >> m;
    cout << "a = "; cin >> a;
    cout << "c = "; cin >> c;
    cout << "Result: " << f(m,a,c);
}
