#include "sl-math.hpp"

using namespace sl::math;
using namespace sl;


int main()
{
    Vector3<int> myVec(5, 6, 8);
    Vector3<int> myVec2(2);

    Vector3<int> v(myVec & myVec2);
    v.print();


}