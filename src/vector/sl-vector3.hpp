#ifndef __SL_MATH_VECTOR_3__
#define __SL_MATH_VECTOR_3__

#include "sl-vector.hpp"

#define VecX 0
#define VecY 1
#define VecZ

#include <iostream>

#define BaseVectorClass Vector<data_type, 3>

namespace sl
{
    namespace math
    {

        template <typename data_type>
        class Vector3 : public BaseVectorClass
        {
        private:
        public:
            Vector3(data_type x, data_type y, data_type z) : BaseVectorClass()
            {
                BaseVectorClass::vector_values[0] = x;
                BaseVectorClass::vector_values[1] = y;
                BaseVectorClass::vector_values[2] = z;
            }

            Vector3(data_type x) : BaseVectorClass()
            {
                BaseVectorClass::vector_values[0] = x;
                BaseVectorClass::vector_values[1] = x;
                BaseVectorClass::vector_values[2] = x;    
            }

            /* Value Getters */
            data_type x() const
            {
                return BaseVectorClass::vector_values[0];
            }

            data_type y() const
            {
                return BaseVectorClass::vector_values[1];
            }

            data_type z() const
            {
                return BaseVectorClass::vector_values[2];
            }

            /* Data Change */
            void negate()
            {
                for (size_t i = 0; i < BaseVectorClass::vector_values.size(); i++)
                {
                    BaseVectorClass::vector_values[i] = -BaseVectorClass::vector_values[i];
                }
            }

            Vector3 operator-()
            {
                return Vector3(
                    -BaseVectorClass::vector_values[0],
                    -BaseVectorClass::vector_values[1],
                    -BaseVectorClass::vector_values[2]);
            }

            Vector3 operator!()
            {
                return Vector3(
                    -BaseVectorClass::vector_values[0],
                    -BaseVectorClass::vector_values[1],
                    -BaseVectorClass::vector_values[2]);
            }

            Vector3 operator-(Vector3 other)
            {
                return Vector3(
                    BaseVectorClass::vector_values[0] - other.vector_values[0],
                    BaseVectorClass::vector_values[1] - other.vector_values[1],
                    BaseVectorClass::vector_values[2] - other.vector_values[2]
                );
            }

            Vector3 operator+(Vector3 other)
            {
                return Vector3(
                    BaseVectorClass::vector_values[0] + other.vector_values[0],
                    BaseVectorClass::vector_values[1] + other.vector_values[1],
                    BaseVectorClass::vector_values[2] + other.vector_values[2]
                );
            }


            // Dot Product
            data_type operator&(Vector3 other)
            {
                return (
                    (BaseVectorClass::vector_values[0] * other.vector_values[0]) +
                    (BaseVectorClass::vector_values[1] * other.vector_values[1]) +
                    (BaseVectorClass::vector_values[2] * other.vector_values[2])
                );
            }

            data_type operator|(Vector3 other)
            {
                return (
                    0
                );
            }
        };
    };
};

#endif