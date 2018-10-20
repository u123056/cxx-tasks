/* Image iterator.
 * @file
 * @date 2018-08-05
 * @author Anonymous
 */

#ifndef __ITERATOR_HPP__
#define __ITERATOR_HPP__

#include <algorithm>
#include <type_traits>
#include <vector>
#include <utility>

#include <boost/iterator/iterator_adaptor.hpp>

//{ image iterator
U2FsdGVkX19LOtvl4KGOz3TLmkjfZih/gvgYkfzFafXxTz5rWCcvsxs2kd4Uz8pn
U2FsdGVkX1+CwlQ0wigAO2nyK0VvwibVn/J3wNbX5IZ8CacPshLJKf74kmeajLtcTSBnLtjb0NeCFWlnvrsJiBVrzS0OLMetiU8nZmafAl1hhHzDbmnELEqBVbmqMTyDALuzJZ+Fx7+qDZaz2hBSQZlWpTdKBxk0/igGmEX+buTKeOZ2vGhVT/0LynP2KSKnDyC6yDBf1RlX/ydt8uagRbDq9GE03xuk
U2FsdGVkX19O0IOIDgscWiIACRcUD3wv
U2FsdGVkX18vqokKziKczGs0EuR3b+f2HLrbexStnyw=
    U2FsdGVkX1/5ggqvAebgv/y3Z3lLqkn9aLAZNgQQPqceRjbfLXHuNPth87Y9H8P2rmc4a9evY6+PwVSkd29OjW8qZpWwQxTe1qrcrOch5/g=
        U2FsdGVkX19cCvIInzyMfnpIRG2J1pOiNK+Y/H/AVCOYuQLGVVdQkuGiHtBYwokhXxNb8DI5mAw=
        U2FsdGVkX1/K0XnL0PM6whLkKnCGj/Zz1bzBxgEdo8o=
        U2FsdGVkX1/tkU4rF4TXLiwJygs5PTjEBFolByikxlE=
        U2FsdGVkX194H1eVqmiPFPZNkbvsn3oj9bIO5sBl6X/X28louQHI2g==
    U2FsdGVkX1/HqMoqg7aGgpaff9B3X8AS

U2FsdGVkX1+9X+X+TehXbawLHg3RcKGQR9H1A9AIKig=
    U2FsdGVkX1+77/GUq4V+YFju2o+WgXcwjjzT00AKXtNIab7XuvdmAgikN0YU//dkpXK7/Tot4npini63Vgz8CA==
    U2FsdGVkX19yymdwZgpjT4j7OXsizl0Ss66RB5AMVBKS0FdFVanUfZoKDisYW5AS8Y5bklWigeQg6r8nKcdPaZPm7a3PI8xUGkEhazv5nPk=

    U2FsdGVkX18yyTbWH31l0MCowvsl5ftgYM3M7aOD/EdotZE2gtUsKQ==
    U2FsdGVkX19KqX5dIWZ4xGBDVBUdvvry
        U2FsdGVkX1+ZX3wfyozVhOxPgC6iNWtH8vTk/n0NmPnnbT+lXlyrlKfd4TWyU7BbWt2GSwtMOzy/0Gyj3Ow/RV1W0crWjDCJ9KQiu2uCEGZkkrd6euGMng==
        U2FsdGVkX194Ht3iyxhBmI4zwNzemd5h
            U2FsdGVkX1/J+jUc+TwjgYj4YLThDIOho5jec5PY7t+3UCTz+XffGg==
            U2FsdGVkX1+ltUcSO2CQQ4+lVejxEZW+crp9kIkVOYvr9PNJ2iL441PyWSq3Uq6U
        U2FsdGVkX18Izn4mkk3/3D4nqEaU+5rr
    U2FsdGVkX1+MGSqJdTuwVmXpKNY9RUBr

    U2FsdGVkX197jRZ7HHIWXGYRpvaV3k3XtlC0wK4zgz9oWXzHKuIVpw==
    U2FsdGVkX18YIKmyrR4CdWy7ynLO9Rkc
        U2FsdGVkX1/xMT4R0C0fx39W6+GuJld9YzYTDaynbgKcKrE3H4bNAVyBk3GNIAK8jlR3HYRt1fOyCFEY2oFMvSfqfwzPF+Tr
        U2FsdGVkX199LHIGCa/w40/Bhe5c+4IE
            U2FsdGVkX18rblHzQMY96bo82M6tV33praJ1WLk+JQl5aA01Aozotw==
            U2FsdGVkX18xcsV3esDmX1x1wLeneihEMKfFhtyQFLPCE/oUdzmeYVaYzhVCMpTA/QbjTemIkKpXnlBOFnIV3g==
        U2FsdGVkX1/rQ2lupTIT/d+WQIm016zl
    U2FsdGVkX1/EWfP+NSIV8J2TScyJkijr

    U2FsdGVkX19LLpTqLHci9g+90VlqCwUPgt1FZvCJNj1Bv8iSxKTkTZ5G/icFqREH
    U2FsdGVkX19EmpRV+6RipMtFKaWG0KrJ
        U2FsdGVkX1/FGkeA/qqH4RbKlVUhNVNThsEkbeXhCGcoce93edUFGX8V376V68ic4AXEq5acagyoB7hFeLU0PZEzZaIkspfA
        U2FsdGVkX1/wLNRlZBpBp27aUM+I6t0R0ZfY7GgMDTUhSQHafcYUwqryR4xdqZlk7elNM6W5ZBld4DRwHDV5NI6sFp3gR0rqZXWZ5JY6bZM=
        U2FsdGVkX1/S2mpPxaPK/yad/l9XEkdnZ5XmN5ExJDg=
            U2FsdGVkX1/vXobuomu0tYH/Hz65Liwt9RKNfnFlz4hy6Vl9XhLUguFzGg3EEQKdVuQ9E0J+ELb3XnslJP8RuiQBMSj+LbYvID1PnTc0aEzszxPz5WSbgbpKtNXPAwD4
        U2FsdGVkX1/piK9CQvE167J/kx0A+beC
        U2FsdGVkX1+xE0EL1m9So6s1hA5CqFFm
            U2FsdGVkX1/zIAlvgZZL9iyLXkLZi2lD8nkIgnKNKdo=
            U2FsdGVkX1/pyFtoOLkPFeiJ3NI0wYMcFG7CLXECv5zKucNvX3/jRDQbeM5dHRB1abgc1IOgKPqyciNLT6uYB6KVKRrSIgw2NCRJFWHNJ3GR9yRPS6ZJr/03VdrfucKejoZ44epOSMI=
        U2FsdGVkX1/OZ+l9W/vkq9pHTuXD+Nxk
    U2FsdGVkX19SOdJZzdcB+TTT24Sd6LIi

    U2FsdGVkX19Ey3F6l1JtYFnM3ii5Y0XbeZB0xv8YaGttgF8YJ81sFRSzifS6e1OSfvsLy+L2aP8yB4J33yhvwy0vQGZR5XE8MyHF4RnLGsM=
    U2FsdGVkX192dg8kVeFKxDiraOIFo6jY
        U2FsdGVkX1/tqFXg+OTe9iy0z+eW8Da4Op3GLPPci0RH2D8K1fpDYd0BfWI7tsr9gjYx5bbtt+cV61ut4nZyAJVk/jle3XZsRrFj+tFZL0ITcnBZDYYdOHp70Vfkam0eCtQzKGRAbyEC0zPxDPQ04TcVvjNOH3448eXipm0AYKIzwDOV9Ib6mMBeY4GDIT+vhICgKq0Qt4Ep56PO50h9i49rMdXg49i7UqU7oVN/uQMBUUm0+62fjg==
    U2FsdGVkX1+WMzUFRhR9P5w9UYiSlzIq

    U2FsdGVkX18sZw+tVXKIa6MqM/DiOJTWQC2L+gbTeUU=
    U2FsdGVkX1/DoNpsKntalAFdYg6yzaO9SEJiwNYdwFk=
    U2FsdGVkX1+vjSTuibihHWLD251ZuA9rWyf+WoYPLfnMwNjTCJ0KCw==
U2FsdGVkX19V7g81Re+thIvs88X0dUhg
//}

template<class Container = std::vector<uint8_t>>
class image
{
public:
    image(size_t width, size_t height, size_t stride):
        data(stride * height),
        width_(width),
        stride_(stride)
    {}

    auto begin()
    {
        return image_iterator(data.begin(), width_, stride_);
    }

    auto end()
    {
        return image_iterator(data.end(), width_, stride_);
    }

    auto begin() const
    {
        return image_iterator(data.begin(), width_, stride_);
    }

    auto end() const
    {
        return image_iterator(data.end(), width_, stride_);
    }

private:
    Container data; // image data including strides. Access by (x, y): data[y * stride_ + x]
    size_t width_;
    size_t stride_;
};

#endif // __ITERATOR_HPP__
