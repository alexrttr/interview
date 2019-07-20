//g++  5.4.0

#include <iostream>
#include <cassert>

// ----------------------------------
// vec.size()==N-1, 0<=vec[i]<N
unsigned median(unsigned a, unsigned b, unsigned c) {
    using namespace std;
    return max(min(a,b), min(max(a,b),c));

    // if (a < b)
    //    return max(a, min(b, c));
    // else
    //    return max(b, min(a, c));
}

int main()
{
    assert(2 == median(1,2,3));
    assert(2 == median(1,3,2));
    assert(2 == median(2,1,3));
    assert(2 == median(3,1,2));
    assert(2 == median(2,3,1));
    assert(2 == median(3,2,1));
    assert(2 == median(2,2,1));
    assert(2 == median(2,2,1));
    assert(2 == median(2,1,2));    
    assert(2 == median(1,2,2));
    assert(2 == median(2,2,3));
    assert(2 == median(2,3,2));    
    assert(2 == median(3,2,2));    
    assert(2 == median(2,2,2));
    std::cout << "PASS";
}

