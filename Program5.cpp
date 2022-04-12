//配列
#include <iostream>
using namespace std;

int main()
{
    int hairetu[10] = {1,2,3,4,5,6,7,8,9,10};

    cout << "hairetu[3]: " << hairetu[3] << endl;
    cout << "hairetu[0]: " << hairetu[0] << endl;

    hairetu[5] = 7;
    cout << hairetu[5] << endl;

    return 0;
}