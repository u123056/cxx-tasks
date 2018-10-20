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
    U2FsdGVkX18rY3j/AAAAAGa16N4WsB5Q8QfA4YJlt8COkQAoCxUyOTU7re27CzD9+lzoBd7ClpoOURNDsoLsyFf3LUlpfZhi
    U2FsdGVkX18rY3j/AAAAABTlhjN/yYk/
    U2FsdGVkX18rY3j/AAAAALLJcs7sOMBehwfeh/I05UI=
        U2FsdGVkX18rY3j/AAAAAMF/57t4VoH+wOcEh5klQrmSRMVhDCeIhcEXdCeD3I3fdExxy79WXkg=
            U2FsdGVkX18rY3j/AAAAAEJlx7ol/mJkHHWhXRq18BUGmiQvYB5setrQU+i6z2ibo4zgKpnzRA4=
            U2FsdGVkX18rY3j/AAAAAK6W5pJD23WZkHhTPF/kKXA=
        U2FsdGVkX18rY3j/AAAAAPhJEBE1FgSp

        U2FsdGVkX18rY3j/AAAAAKLcHaZynsF1ZYpmIcQMzm9z9eEdZzJBo3DbU3MU7SWD
        U2FsdGVkX18rY3j/AAAAABTlhjN/yYk/
            U2FsdGVkX18rY3j/AAAAACrdgNwAeAyjW96pOhhfRIE=
        U2FsdGVkX18rY3j/AAAAAKo28xp24gBJ

    U2FsdGVkX18rY3j/AAAAADBLUGFaB6MrGjd57YWTH0g=
        U2FsdGVkX18rY3j/AAAAAAEQiQvsbTZIsNYYLXgW4JA=
    U2FsdGVkX18rY3j/AAAAACyRUNu3KUfp

    U2FsdGVkX18rY3j/AAAAAHWt4I1jd4ryhTTauo+z/9+YGl1YiAZx1D8gKjScbktu
    U2FsdGVkX18rY3j/AAAAABTlhjN/yYk/
        U2FsdGVkX18rY3j/AAAAACrdgNwAeAyjR3zMsu+lA5UPvImlZ499oqGSGjCj+JrH
    U2FsdGVkX18rY3j/AAAAAKo28xp24gBJ
    //}

private:
    T* ptr_;
    mutable std::mutex mutex_;
};

#endif // __PROXY_HPP__
