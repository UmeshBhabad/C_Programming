#include <iostream>
using namespace std;

inline int Addition(int A, int B)
{
    return A + B;
}

int main()
{
    register int iRet = 0;

    iRet = Addition(10,11); // 10 + 11

    cout << "Addition is : " << iRet << "\n";

    return 0;
}