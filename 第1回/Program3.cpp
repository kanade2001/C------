//演算
#include <iostream>
using namespace std;

int main()
{
    int num_a = 6;
    int num_b = 2;

    cout << num_a + num_b << endl;
    cout << num_a - num_b << endl;
    cout << num_a * num_b << endl;
    cout << num_a / num_b << endl;  //割り切れない場合はどうなるでしょうか？
    cout << num_a % num_b << endl;

    return 0;
}