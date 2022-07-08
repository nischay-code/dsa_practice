#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
    char a; // Structure padding is a concept of adding extra bytes to make reading easier for the compiler.
};

int main()
{
    struct rectangle r = {2, 4};
    // printf("%d", sizeof(r));
    printf("%d\n", r.length);
    printf("%d\n", r.breadth);
    return 0;
}