#include <iostream>
using namespace std;
int main()
{
    int a[9];
    a[0] = 5;
    a[1] = 4;
    a[2] = 1;

    /*cout<<sizeof(a)<<endl;
    cout<<a[1]<<endl;
    cout<<a[2]<<endl;*/

    /*for (int i = 0; i < 9; i++)
    {
        printf("%d\n", a[i]);
    }*/

    // for each loop

    for (int x : a)
    {
        printf("%d\n", x);
    }
}