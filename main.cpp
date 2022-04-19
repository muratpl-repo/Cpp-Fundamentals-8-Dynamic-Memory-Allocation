#include <iostream>

using namespace std;

int main()
{
    int *adres = new int;
    *adres = 10;
    cout <<*adres<<endl;

    delete adres;
    adres = nullptr;
    cout <<*adres<<endl;


    return 0;
}
