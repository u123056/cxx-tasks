/* Map of types.
 * @file
 * @date 2018-08-25
 * @author Anonymous
 */

#ifndef __TYPE_MAP_HPP__
#define __TYPE_MAP_HPP__

#include <array>
#include <tuple>

namespace detail
{
    template<class T, class Tuple>
    struct type_to_index;

    template<class T, class... Ts>
    struct type_to_index<T, std::tuple<T, Ts...>>
    {
        constexpr static size_t v = 0;
    };

    template<class T, class U, class... Ts>
    struct type_to_index<T, std::tuple<U, Ts...>>
    {
        constexpr static size_t v = 1 + type_to_index<T, std::tuple<Ts...>>::v;
    };
}

//? What is wrong with ``*this[i]``?
//{
U2FsdGVkX18qegB642Nc3qGKeF7Ly0HQu7mixTebJD0fTaeSD0u34DheOQL5hG26
U2FsdGVkX19+IjpPjT073SRpEnK4V8N5f3EiF2xfBDHMSK9EEqgZRF0frHTFNyfCxE9sdzv+QEiNiCmc59Buhl4MgdIuoswA
U2FsdGVkX18+RQ8F0QwXUxIyrpq/wGZ5
U2FsdGVkX1+u0GM2OhaBntCq4rMypCQb1VPeizh3o/8=
    U2FsdGVkX1+8c5e9+lCtdslNSGpA/uVU7If1D5Hr514jLtqnc9lbETAoXC3nTvsokbD4ydmfnj8=

    U2FsdGVkX19twMlA7KdReEUBFTci1zSQJ9fjKH1h0tEWiIiknH++iYAY63mcqkF9LnkzXwFG5NA8EGrIpyt1EbWa1o5Xi/79Xyu6pyttMK0R6cuyjwwrQnNN4nEOJWoPRhoqpalOa8I=
    U2FsdGVkX18n4KzOB1HTbmTanCVChpdi

    U2FsdGVkX18RqtDSc5E0UgpatZiE1WfwM85lCAomjCU0vx7oz0d3HA==
    U2FsdGVkX189yR05bfwBUyySW6xwGSLs2CGJjpvOh3Q=
    U2FsdGVkX1//OFtksW9Ijy+roPbZW1Pl
        U2FsdGVkX1+PREb85ge4iCOoW8+RNiaodnzlasc1R18qZHKozzkVMF1aiCp9JyuKBsCCML2q49X0QdoVHC2QLuhIizofHiht6JPccETeezJ0LmJoShzyQw==
    U2FsdGVkX1+QSmo+tvi9LBDcqDtRG8NJ

    U2FsdGVkX1+7evywd4aGK6ccl3Vu66QBO7vW7UHaMfDjWhyD+6IS4A==
    U2FsdGVkX18Fc/PzwjC7PucJEq6p7KH76W53MlIuxoC9JdsG9TYskg==
    U2FsdGVkX19MscUQN2mlvnHTP5Z6xyu4
        U2FsdGVkX19aYddC7DZaxbRegdPe/i4Vkq/rEGwX2EWdCD+Mge0T2WwFjW8X43o4N0zyQXO4xvOlv8bSg9XugpX29kdvoV+VNhE5NSFG0lQVcY1mXak7AA==
        U2FsdGVkX19Huc44zFUKODAIlC/MUbxx9+Ko16tBHpff7ffqykvhUA==
    U2FsdGVkX18ybjqalROUhZ4oCoDL4sb2
U2FsdGVkX1/F4LZQRM4rG37o2aONgFko
//}

namespace std
{
    template<typename T, class TypeMap>
    const auto& get(const TypeMap& tm)
    {
        //{ How to call ``as``?
        U2FsdGVkX19cdY1mgfUseQ7Nw39O59UNZHkHRP1KZ73MXF6doVboqEmZzfXpSIvU
        //}
    }
}

#endif // __TYPE_MAP_HPP__
