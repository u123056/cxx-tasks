/* CSV parser.
 * @file
 * @date 2018-08-15
 * @author Anonymous
 */

#ifndef __CSV_HPP__
#define __CSV_HPP__

#include <string>
#include <vector>

#include <boost/spirit/home/x3.hpp>
#include <boost/spirit/home/x3/support/utility/error_reporting.hpp>

#include "parser.hpp"
#include "quoted_string.hpp"

/* An example of CSV:
 *      kind,of,header
 *      abc,with space,"quote"
 *      "comma , inside",132,  spaces  dot
 *      empty,,
 *
 * CSV (comma separated value) EBNF specification (http://www.rfc-editor.org/rfc/rfc4180.txt)
 *      string := [^,\n]+
 *      quoted_string := " [^"]* "
 *      cell := quated_string | string
 *      row := cell (, cell)* \n
 *      header := row
 *      csv := header row*
 */

namespace types
{
    namespace csv
    {
        //? Which kind of types should I use to describe the CSV type?
        //{
        U2FsdGVkX18rY3j/AAAAAAynboD7QY+arLIoEVDh390njELF9IovarY0IyrNtNX3a9fQDynvfHYYDS5bLlOAbPESAKUwOvy4
        //}
    }
}

namespace parser
{
    namespace csv
    {
        //? Why I need a x3::no_skip here? Where is the original of the error?
        //? Where is BOOST_SPIRIT_DEFINE? Is it necessary?
        namespace x3 = boost::spirit::x3;

        //{ csv grammar
        U2FsdGVkX18rY3j/AAAAANG1o0Gm0rUPDfF2OY1/wPzE9mxsLePmIeTdnjet53hswdm3HhgWaTA9OuXuF5JKHY+i58k6mZxJ
        U2FsdGVkX18rY3j/AAAAANG1o0Gm0rUPeHLyAAwCqPcPWvXAOglf4fq2YTAwMZh01cvTQiMxqrOMf13xhWANm9wVL4NmvJg/8OJnKRfrXAg=
                        U2FsdGVkX18rY3j/AAAAAI2pyCR55iqn8V5nQhL1mPXVRVfjFGJdUR91c9iyT/Cn

        U2FsdGVkX18rY3j/AAAAANG1o0Gm0rUPCcsKA5Fv8B10CtEcql0nky1WZ7DggUKbHTck+l565j+Fj1SU1d/fLsW5AfgoaCfATehEulLXGWuH+DarsC3o/L2tgF/jnGpa
                       U2FsdGVkX18rY3j/AAAAAEB5AfQJrVHtXE4w2fDigPbon/nDb9i/EYozdDQfXUZTaaim2penYAk=

        U2FsdGVkX18rY3j/AAAAANG1o0Gm0rUPdEE1A1OD4TczvkrnfVmQt+sLzkdHXFEsXKAWqaIKoWIRAOtq0437vt7TNJNFWmFyUwyP5v7pRdQ=
                       U2FsdGVkX18rY3j/AAAAAGVCwMPR5led/zkPbc89q08=
        //}
    }
}

namespace literals
{
    namespace csv
    {
        //{ declare ``_csv`` literal
        U2FsdGVkX18rY3j/AAAAADGncsMOXX7t4EaLZCYr4pJ72XfSll/AgH021F0zcuso7mQVAjePSTLaG/v+Vc8ME7paxhB2U+SH
        U2FsdGVkX18rY3j/AAAAABTlhjN/yYk/
            U2FsdGVkX18rY3j/AAAAACrdgNwAeAyjDYPlZDkesFi90rArTVa0f9aCHmwN0fmsHCAtvwbGuKHIlzSx0Vklq76gCcfM6ZWPIZ90zzDQasHnxUZWy0MBoAXvdqN4sEk68u9fAgmRDfo=
        U2FsdGVkX18rY3j/AAAAAKo28xp24gBJ
        //}
    }
}

#endif // __CSV_HPP__
