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
        U2FsdGVkX1/iaQa6PIWy0FbhrZRmCkKpFssTsskCzURfyfBnvpSUR0LYZDtxLxdOxpbZrZXDWUEaFJ9DLP30ZnwumA8+FF7a
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
        U2FsdGVkX19vVmeDkvyQ0gu0FfDReP8+rGLEz5aTHzXpUVgVVzdAuNxXXi+vwvKmR3ilKWbzcjexDpMeXPmQopLux9B1pfxK
        U2FsdGVkX1/qaM24eoQH70I786wg91OP3JRr+qxWb5f7aTa4LiyYzdCvCRfykvf+WKi43NLKGEB07SnV5NgXkMmLMrJ0XgAg9u2F5RUGNgo=
                        U2FsdGVkX18C9epJIAnqK+USYlhHAeIPH0yfOT/PYX0eLHTj5fqfc+f/hBy7UWXP

        U2FsdGVkX19JKbCazr5YFyqlRgb31rUOcEMQa45muz9zsW2i67N4U2sYu1J7eDU4Hk9POZNeV1/rEXkU8lUQ1SfgK40osEl/deIN+dsW1eW4/BPThZ2FiFDye0BotKdA
                       U2FsdGVkX18hS9MKA43p8RzfKbYXpITZvjRbYW0qu2A8MxrrKvdIVpHPNVkKSQn48SHx1Gx+B5c=

        U2FsdGVkX1/9YYy4Fr/yudhl8ctFWzzCV2wYOJgVA7Ej4F61G44uDusP2d13TcXdwXglKjJApsL6xWSOxYVEFV0YJef+BdqUhKUrgW+cmPk=
                       U2FsdGVkX1+B09CH08CKzrtVz6+f8fis1At/DuowZX4=
        //}
    }
}

namespace literals
{
    namespace csv
    {
        //{ declare ``_csv`` literal
        U2FsdGVkX1+oAsjl8FdUJ3b9mTxqRDHQWMIPuAt0lQ+Ukw8bi+Dk/GF+Ntd3J6vUUtFQ0H7mVX0EJzdcFM4bUxL4xhsrVJwn
        U2FsdGVkX19oAD1OZ9PrR5hCIEBcNUZ8
            U2FsdGVkX19hJdESBbkBXXpGiXf8HIMcVu1tYyyNn8ZydMI477Mr9ytJjkxrO0CFB+1dDxO3Mf1aJ5vPbQCwORLx7eALiJROeNa/bXQ+GOXe7DI8+FXdRZc+cxtqXDh6xMLhSae79Jg=
        U2FsdGVkX19pNFuxk1UlqvEvI2yXO8GT
        //}
    }
}

#endif // __CSV_HPP__
