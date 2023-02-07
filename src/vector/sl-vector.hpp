#ifndef __SL_MATH_VECTOR__
#define __SL_MATH_VECTOR__

#include <array>
#include <cstddef>

#include <iostream>

namespace sl
{
    namespace math
    {   
        template<typename data_type, size_t element_count>
        class Vector
        {
        public:
            std::array<data_type, element_count> vector_values;

            void print() const 
            {
                std::cout << "[ ";

                for (size_t i = 0; i < vector_values.size(); i++)
                {
                    std::cout << vector_values[i];
                    if (i < (vector_values.size() - 1))
                    {
                        std::cout << ", ";

                    }
                }
                std::cout << " ]\n";
            }
        };
    };
};



#endif