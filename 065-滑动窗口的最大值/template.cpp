#include <iostream>

using namespace std;


//  调试开关
#define __tmain main

#ifdef __tmain

#define debug cout

#else

#define debug 0 && cout

#endif // __tmain

class Solution
{
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {

    }
};


int __tmain( )
{
    debug <<"test" <<endl;
    return 0;
}
