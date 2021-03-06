/*
* Copyright 2017 sheng chongshan. All rights reserved.
* email: shany.sheng@qq.com
* License: https://github.com/shanysheng/RenderPipeline/bob/master/LICENSE
*/

#ifndef PIPELINE_MATH_H_GUARD
#define PIPELINE_MATH_H_GUARD

#include "Common.h"

namespace pipeline
{
    const float C_PI = 3.1415926f;
    class Mathf
    {
    public:
        template< class T >
        static inline T Clamp( const T value, const T minv, const T maxv )
        {
            T temp = value<minv ? minv : value;
            return temp<maxv ? temp : maxv;
        }
        
        static inline float Deg2Rad (float deg)
        {
            return deg / 360.0f * 2.0f * C_PI;
        }
    };
}

#endif
