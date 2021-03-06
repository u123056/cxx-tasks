/* Custom manipulators.
 * @file
 * @date 2018-08-05
 * @author Anonymous
 */

#ifndef __IOMANIP_HPP__
#define __IOMANIP_HPP__

#include <iostream>

//{ endm manipulator
std::ostream& endm(std::ostream& os)
{
    os << "[eol]\n";
    return os;
}
//}
//{ squares manipulator
struct squares_proxy {
public:
    explicit squares_proxy(std::ostream& os):str(os){}
    template<typename T>
    friend std::ostream & operator<<(squares_proxy const& q, T const& word) {
        return q.str<< "[" << word << "]";
    }
private:
    std::ostream & str;
};
struct squares_creator { } squares;
squares_proxy operator<<(std::ostream& os, squares_creator) {
    return squares_proxy(os);
}
//}
//{ add manipulator
struct add_proxy {
    struct add_proxy_next {
    explicit add_proxy_next(std::ostream & os, long const& num): str(os), previous_num(num) {}
    std::ostream& operator<<(long const& current_num) {
        return str << previous_num + current_num;
    }
    private:
        std::ostream & str;
        long previous_num;
    };

    explicit add_proxy(std::ostream & os): str(os) {}
    struct add_proxy_next operator<<(long const& current_num) {
        return add_proxy_next(str, current_num);
    }
private:
    std::ostream & str;
};
struct add_creator { } add;
add_proxy operator<<(std::ostream & os, add_creator) {
    return add_proxy(os);
}
//}
#endif // __IOMANIP_HPP__
