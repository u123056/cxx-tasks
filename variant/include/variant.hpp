/* Variant classes.
 * @file
 * @date 2018-08-12
 * @author Anonymous
 */

#ifndef __VARIANT_HPP__
#define __VARIANT_HPP__

#include <any>
#include <map>
#include <memory>
#include <variant>
#include <vector>

#include <boost/variant.hpp>

//{ number
struct number : public std::variant<int, float>
{
	using std::variant<int, float>::variant;
};
//}

//{ array
struct array : public std::vector<number>
{
    using std::vector<number>::vector;
};
//}

//{ recursive_array
struct recursive_array : public std::vector<std::variant<number, std::shared_ptr<recursive_array>>>
{
    using std::vector<std::variant<number, std::shared_ptr<recursive_array>>>::vector;
};
//}

//{ recursive_array2
struct recursive_array2 : public std::vector<std::variant<number, boost::recursive_wrapper<recursive_array2>>>
{
    using std::vector<std::variant<number, boost::recursive_wrapper<recursive_array2>>>::vector;
};
//}

//{ variant_decorator
template<class... Args>
struct variant_decorator : public std::variant<Args...>
{
	using std::variant<Args...>::variant;

	template <typename T>
    const T& as() const {
		return const_cast<T>(this->as<T>());
	}

	template <typename T>
	T& as() {
		if constexpr (!std::disjunction_v<std::is_same<T, Args>...>) {
			return std::get<boost::recursive_wrapper<T>>(*this).get();
		} else {
			return std::get<T>(*this);
		}
	}
};
//}

//{ recursive_map
struct recursive_map : public std::map<std::string, variant_decorator< int, bool, std::string,  boost::recursive_wrapper<recursive_map>>>
{
	using std::map<std::string, variant_decorator< int, bool, std::string,  boost::recursive_wrapper< recursive_map >>>::map;
};
//}

#endif // __VARIANT_HPP__
