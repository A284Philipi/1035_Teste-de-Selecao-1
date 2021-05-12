#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    if (c >= 0)
    {
        if (d >= 0)
        {
            if (b > c)
            {
                if (d > a)
                {
                    if (c+d>a+b)
                    {
                        if (a % 2 == 0)
                        {
                            cout << "Valores aceitos"<<endl;
                        }
                        else
                        {
                            cout << "Valores nao aceitos"<<endl;
                        }
                    }
                    else
                    {
                        cout<<"Valores nao aceitos"<<endl;
                    }
                }
                else
                {
                    cout<<"Valores nao aceitos"<<endl;
                }
            }
            else
            {
                cout << "Valores nao aceitos" <<endl;
            }
        }
        else
        {
            cout << "Valores nao aceitos" <<endl;
        }
        return 0;
    }
}
