#include <iostream>
using namespace std;

int main()
{
    int bilangan1;
    int bilangan2;
    string status;
    srand(time(0));
    bilangan1 = rand() % 10;
    bilangan2 = rand() % 10;


    if (bilangan1 == bilangan2)
    {
         status ="Bilangan 1 sama dengan bilangan 2 ";
    }
    else if (bilangan1 > bilangan2)
    {
        status = "Bilangan 1 lebih besar daripada bilanagn 2";
    }
    else
    {
        status ="bilangan 1 lebih kecil daripada bilangan 2";
    }

    cout << "Bilangan Pertama =" << bilangan1 << endl;
    cout << "Bilangan Kedua =" << bilangan2 << endl;
    cout << "statusnya =" << status << endl;
}
