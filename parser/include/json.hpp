/* Json object.
 * @file
 * @date 2018-08-09
 * @author Anonymous
 */

#ifndef __JSON_HPP__
#define __JSON_HPP__

#include <map>
#include <string>
#include <vector>

#include <boost/spirit/home/x3.hpp>
//? Why I need ``std_pair`` header? Do I need one for std::map?
#include <boost/fusion/adapted/std_pair.hpp>

#include "parser.hpp"
#include "quoted_string.hpp"
#include "variant_decorator.hpp"

/* Json EBNF specification (https://www.json.org)
 *      string := \" ([^\"] | \\\")* \"
 *      number := [0-9]+(\.[0-9]*)?
 *      boolean := "true" | "false"
 *      nullable := "null"
 *      value := number | string | boolean | nullable | array | object
 *      array := '[' value (',' value)* ']'
 *      key_value := string ':' value
 *      object := '{' key_value (',' key_value)* '}'
 *      json := array | object
 */

namespace types
{
    namespace json
    {
        //{ describe json data types
        U2FsdGVkX1+sSD+AXt6gkDb6cpsxX8J1M6TtwHrAJZA6UDleQkEj/74rVOhbXMeV2S5zvNNv5UU=
            U2FsdGVkX1+UVRWtVwtjT1w38lH2KdnB
            U2FsdGVkX19iEbyf7fAftxxo8OGM3SAr
            U2FsdGVkX18FRMvBZj2sg9DHRBtrbFRi
            U2FsdGVkX1847UKVwxUVi4iROmT3yUH6PpqylJKy2Tw=
            U2FsdGVkX18HBDvgFN8NpA8fobazwEz3UmvxnOKoGXA=
            U2FsdGVkX19mT1utY05Frmb90seEDfv5JiFjs7bE6ExYDRABeZSMEEK0hgJ3PBNh
            U2FsdGVkX18/SzwV2G/1nEUyvTSbWIcTGvW2aZnDgkaI33AMZEdoR8hIX01XxSvxZHoa5KYAJv4=
            U2FsdGVkX1/lI8FHo0RZDl9bs8ME+P0pEO8uC/hATAT2kNZRuZVY56ihisIk1qBA
        U2FsdGVkX1/1cQDRODxOW5lVVwwEajn/

        U2FsdGVkX1+/yV3ACikJePem9lYKSW5QF33/zmYgW9XwRJz+15mo2ADQngkMDJGIq/SaYDzKNNccRIlIsbKn+Q==
        U2FsdGVkX1919JOUmn5/Guz0xrnN7geeWWLr0hrR5gWTWalNXBwCTpG9f/r+QhWz4+U8pnlT7/w3xAxnMHSPEwxsoD8+Auhm

        U2FsdGVkX18bY7xA5AZZaCk9bJ9vNoWIdTFn19xxsGLUo3RUkJkCmT0d3dNANhbO/zenZ9l4Fn1XKjSSBGK0JaxkmXLE44HR
        U2FsdGVkX1/0eBCJnryUjB89jYMUsmH2
            U2FsdGVkX19/nRYA+Hme6ZnSmd9ms0qXv+xjRgwU8ewvVviQEWkP+GnrTzjYe7g6pPW1PYX8gEjcjJHeJWTW7g==
            U2FsdGVkX19rnUp6gH13Ok7NP2jpGm4tR12hycGCwLLPRLfCoi7uvoNomKKc+PJqrVs445vlNAw=
        U2FsdGVkX1+A5m9E2X8/wPiEwb/6HoVn
        //}
    }
}

namespace parser
{
    namespace json
    {
        //? Why I need ``sfloat_`` instead of just ``x3::float_``?
        //? What is the syntax ``class array_``? Is it wrong?
        const auto sfloat_ = x3::real_parser<float, x3::strict_real_policies<float>>();

        //{ describe json grammar
        U2FsdGVkX19o2L58mY7weUdEM0BCD+GqLlyIv1iO0Mx7rRM2IzdbMJkxmRDWwUthsg7jdrOzyGXy581yuC1koQ==
        U2FsdGVkX1+Iy9cJdV3aHFuRYJJvehhvMJHbfiH4Tnf47EsK3mgPZC6hONGYnrH4s4wqhaskhubezo2vOK7oQkZY3hZa6rx6

        U2FsdGVkX1+BBIB6M0ipZA1XkfH/Z/83Tg9W/NhifEYc6wrlGkYevfZXuQW22tpcVLalnb0RkKa7f60eVEc6sbVJ8v3gKpy9T/MGDaeN2EE=
        U2FsdGVkX19ROfLueN9e0PU/D53tl6txxaMs27bG6uuClvqlREEwatyCpXVxHW0OBkjesFHWivhGt10fEHYHFTUnWL8HZvz+Tt6SfFWwwx9GDTMq5P9AjA==
        U2FsdGVkX1/oX6ymO2Ng5kAxmENnXVYAjEAPh8va4rTn4AIpzRxW8Sgu8e7IZCaqNABmuV8pMMtGd+sgfCqg/s/jZyyJOY6nsWgfQHP2gBo=

        U2FsdGVkX19KhJWlImJheUFZ0F9NsBcvQYvl6W+Yz+1xWZkUzH5TF2V7XTouXWizeNLxer7EV7o3AvwSsgGuUyL4EsLrZ8pO1AewGBPbjqksfIB2YP+Skg==
                         U2FsdGVkX19Z7fbLhvBINL5CMkfJ15fySVTyqHK7T0yWBHJGOkVVyHFP7xy8K/AciWzdRkApUDzCiE97+W5X1VjLdscmLy+x82EWI1wpd9omXyU17fJ4mQ==

        U2FsdGVkX1/oeX58qOIzE2f67RFqH5ZY7h1PNpj+6k00bD1bR91xm9WqC0vpqFoGQrqYm296qqO+V6jzk2eTI0Tnmf9mnKObFzrhhPMvNSLCisowsJA5DtaHmpScj8zB307Oz99LLsnW0oXSiUxi+v+QYOvkkpkD79wQpxrehxA=
                             U2FsdGVkX1/tyuqSXRK0+Mf9qqqIltbJLIn2g+GSl4C25ssYx7OZEEkNJMfA4qqIPbPvgnNa9q0=

        U2FsdGVkX1+9u/oSc/8K9RPOpPtIVQ4YV+AyeJA72eAXUv8+4UQVxeyZMc76vcf6T2RxbGkL8OZ30iVqGgtNcLXBSNT9Y7x7
        U2FsdGVkX19XYAezJT+7/BgKnLb0UvJTdKZv78g7O//+NEPvw7rFtG+oWk7s5GZEx3iAr0pRGuz022UEfHzXyZwHu3IX2UoJ
        U2FsdGVkX19+WGBFbe+oZuPDVis2oCB/y4qxHZaCrMSi1Qq/Aus4ulSgxiYjdQI32CSD3s1SubQ=
        //}

        BOOST_SPIRIT_DEFINE(array, object, json);
    }
}

namespace literals
{
    namespace json
    {
        //{ describe ``_json`` literal
        U2FsdGVkX1+Fo+vyOcmz0p5LhvyWUjlyMGOh5EBM9DG/3dgJyo0wWV5ghkhgd4KMUoTj3ck5WyT1wai0sucpxFxs8172NHWM
        U2FsdGVkX18X4gnrcC3SJ3zjyHI2uzB1
            U2FsdGVkX1/dkHkdWW5JktEn21xc0mNmkFPhtvjeiTtZf+xEHlvuGkfT9eqpVsxl1psEXe99mWKxItVl6gbk9IWK2uT447iv6zFCA1cRhDxHpwAzNDZlaBuHdf38/vNIRRlyL1bW1KFIVxG+q+/0nA==
        U2FsdGVkX18pBY4WOwk2wjMwFy36Y/7V
        //}
    }
}

#endif // __JSON_HPP__
