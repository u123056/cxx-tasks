/* Proxy object.
 * @file
 * @date 2018-08-07
 * @author Anonymous
 */

#ifndef __PROXY_HPP__
#define __PROXY_HPP__

#include <mutex>
using namespace std;
template<class T>
class ptr_holder
{
public:
    ptr_holder(T* ptr): ptr_(ptr) {}

    //{ describe proxy object
    class proxy
    {
    public:
        proxy (T* ptr, mutex& mutex): ptr_ (ptr), mutex_(mutex)
        {
            mutex.lock();
        }

        ~proxy()
        {
            mutex_.unlock();
        }

        T* operator ->() const {
            return ptr_ ;
        }
		
    private:
        T* ptr_ ;
        mutex &mutex_;
    };

    proxy operator -> () const
    {
        return proxy(ptr_, ref(mutex_));
    }
    //}

private:
    T* ptr_;
    mutable mutex mutex_;
};

#endif // __PROXY_HPP__
