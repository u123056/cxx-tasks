/* Proxy object.
 * @file
 * @date 2018-08-07
 * @author Anonymous
 */

#ifndef __PROXY_HPP__
#define __PROXY_HPP__

#include <mutex>

template<class T>
class ptr_holder
{
public:
    ptr_holder(T* ptr): ptr_(ptr) {}

    //{ describe proxy object
    U2FsdGVkX1+tNxAsTx7dWq9XOeoR2nZtzukgXA5VNSyR2kp5jUaIZEQcIEL3vjB1l8bB7QOgLNBYcXD6CAw38r+ntsXI5BXP
    U2FsdGVkX19NCy9KFh52pwFHs6hdk3R7
    U2FsdGVkX1+DlI+zvMermXsDbvv8E+6yDQ+ME3Mr7l0=
        U2FsdGVkX1++eCO4TlDQ1TmDLvhz/aiivqmw/cH8N1ZhI3MK9uehBkppbqrexkAK0Tshd+eUWU4=
            U2FsdGVkX1+sluXf8WIZpf5CAbXvhQ+5XCGvhBe/FNU9jdMt9f9CbZtxn/jd46MvOUYdnEpgLXs=
            U2FsdGVkX18Elve5Qa/HL47xH+Kl/8bsRcN0wPTFkRw=
        U2FsdGVkX1/381v9iRxF8FZay3goqiHT

        U2FsdGVkX181DPOduSjjrDQexf7NupAqdRPIzkBBJ5as46H+0SfAiZ6WBQupEnyr
        U2FsdGVkX1892meCFmlZeBIXzpEq2aPA
            U2FsdGVkX19sy7AJZ1fbHYNfoB8xtPt+9j4f+sQQPSI=
        U2FsdGVkX1+YKkLtcK1qhnxLJYV6sd0u

    U2FsdGVkX1+hj9x2LgtEXwAofEtPTPLJq1hFAxMnLfY=
        U2FsdGVkX1/lCAS1CJLmgzpYbOsZyK91seMkLov7X94=
    U2FsdGVkX1/B8z9Ca3CRhdGRfVi81gQ+

    U2FsdGVkX1+gejL7OvYs7IUYI4N/zWv0WgUvX9cIUa2p/Dpnge+uv4xMZ3w1hpWn
    U2FsdGVkX1/hwsadW/zbKgz0rqO88vs4
        U2FsdGVkX19L3FXz6tVtEbmApwF3zGKi++qRb9tSWZdgW5MjzOHv1E21btGW4IMr
    U2FsdGVkX19YMG2D8CL/yMjfCmCK3nxH
    //}

private:
    T* ptr_;
    mutable std::mutex mutex_;
};

#endif // __PROXY_HPP__
