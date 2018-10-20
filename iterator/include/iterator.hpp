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
U2FsdGVkX18rY3j/AAAAANx44hwxjb53sjltiUbWz1qiR2zioiBn6N+Rf3BiatYZ
U2FsdGVkX18rY3j/AAAAALHD+SPrPOH2ZQMZdgVQSN6HHHFH1n17vRbJH/mRxvGz8xbcvnPcF40zq2j3VY6yNPjBI+PEMqVLzXUISZsykRVc8Hffed004tNc+/0HjhzaVsfhmWBRKY3JNuJng3dg/Ou47XN+fgwxpNI/sZfVliAd3CzJJJv7vFyjEUtrGr6RFs+0/w99QkUK/88g6HAT8zRYnde9pdNB
U2FsdGVkX18rY3j/AAAAABTlhjN/yYk/
U2FsdGVkX18rY3j/AAAAALLJcs7sOMBehwfeh/I05UI=
    U2FsdGVkX18rY3j/AAAAAK5H5L0C7atwAcfn+qW/CBkYa17y2DNvaBI1GCdUecTow41Jsq00xfYZxOCh6qYYv9RnSCdQXQHLUefl8CYw73c=
        U2FsdGVkX18rY3j/AAAAAK5H5L0C7atwfOsw4Jlf1GZ7+PNqshkUvYMMf3upOQZdE2dmKn8fVHs=
        U2FsdGVkX18rY3j/AAAAAKIZqT9BfzANYaKnJG2gN3c=
        U2FsdGVkX18rY3j/AAAAAM5xbZStB4Xl2doUY1mOdrg=
        U2FsdGVkX18rY3j/AAAAAExaqgWm1Dm+GZ6E55FEgOc/4ytwIJe7HQ==
    U2FsdGVkX18rY3j/AAAAAPhJEBE1FgSp

U2FsdGVkX18rY3j/AAAAADBLUGFaB6MrGjd57YWTH0g=
    U2FsdGVkX18rY3j/AAAAAM3b7W/CS4R36pvqpWRRIcS7XiBcggC8n5/2kzrKz9tu8DJAk9TinsDvFARTrYH33w==
    U2FsdGVkX18rY3j/AAAAAJuzaIpTlwuvt44eFTE9TU4CKJUN+RYTxGoIfOefjGERKjDSPWvY0nWi9b1Onyzadj35PP3r1FdvNPWw4bHMz+k=

    U2FsdGVkX18rY3j/AAAAAGh1e84NBup8/jXx5zLGzOsW9tosBMZZ1g==
    U2FsdGVkX18rY3j/AAAAABTlhjN/yYk/
        U2FsdGVkX18rY3j/AAAAAE3b/59Ou3SoRQPuhzO2jcqV+sYZSGohL2TOzSvM4G/6Vlfx0bIFVMIVjDkP6NXPtMktatgOBmqYTNB+UJcUkrLqRivY2X8KjQ==
        U2FsdGVkX18rY3j/AAAAABTlhjN/yYk/
            U2FsdGVkX18rY3j/AAAAAJm9h+F7oJp9D+qYdWGSwJWpWgnsw/Wzyw==
            U2FsdGVkX18rY3j/AAAAACB5WY4DlyZPgVcglPdG1kfebJ7Uh2DI1VxabTQUj79i
        U2FsdGVkX18rY3j/AAAAAKo28xp24gBJ
    U2FsdGVkX18rY3j/AAAAAKo28xp24gBJ

    U2FsdGVkX18rY3j/AAAAACU27g75Yiyeq8TozaytaMSHbnN/fdsVOQ==
    U2FsdGVkX18rY3j/AAAAABTlhjN/yYk/
        U2FsdGVkX18rY3j/AAAAAE3b/59Ou3SoRQPuhzO2jcqV+sYZSGohL/3vcDd2gl5ILniuJUqfiu/x47dX+ZvngCBGYadddt6Y
        U2FsdGVkX18rY3j/AAAAABTlhjN/yYk/
            U2FsdGVkX18rY3j/AAAAAOauyPkFWQSDVxc+2QVUJPeQ6TDxDOJ4xQ==
            U2FsdGVkX18rY3j/AAAAACB5WY4DlyZPgVcglPdG1kfebJ7Uh2DI1W82KOy4OimOUVn8hJtSEXmum35RtYu4dQ==
        U2FsdGVkX18rY3j/AAAAAKo28xp24gBJ
    U2FsdGVkX18rY3j/AAAAAKo28xp24gBJ

    U2FsdGVkX18rY3j/AAAAADxpDZftjlkTdcSWxZJPODzKCZrggI04nu+rcOGHoOeU
    U2FsdGVkX18rY3j/AAAAABTlhjN/yYk/
        U2FsdGVkX18rY3j/AAAAAG4hosRxbzwQINAanCZNphaF52YYDDmxndLUg5NShxoEr/ODcgRVo6Ji79V8Jqk5eoVqNBoZhmOw
        U2FsdGVkX18rY3j/AAAAAJm9h+F7oJp96MPGSNm2Ux5htaxhpkGwXegbpk9ORS9zzvBoYK95sxFCY5p0n1RlH8M/Xn2o1HfUbcHrF9FkB6c=
        U2FsdGVkX18rY3j/AAAAAAhLeUXQSugOE7ys5DxEAXs=
            U2FsdGVkX18rY3j/AAAAACB5WY4DlyZPgVcglPdG1kfebJ7Uh2DI1W82KOy4OimOM6CPVyZ8KSulplR/xi4dFqVHuCsMyA4njDueMPhGzsT80aBHqroMlJb4vFeNnx9i
        U2FsdGVkX18rY3j/AAAAAM1UvrO0oWip
        U2FsdGVkX18rY3j/AAAAABTlhjN/yYk/
            U2FsdGVkX18rY3j/AAAAAPxfIheB/MCd3gzvk9puZQc=
            U2FsdGVkX18rY3j/AAAAACB5WY4DlyZPgVcglPdG1kfebJ7Uh2DI1W82KOy4OimOf6/0EEAAYBJC+HvgeAhgKUPPY1XB3nOP/H70QLp0pxoFYNwf3qMeencDH0kr/HebCWT7kJh0to4=
        U2FsdGVkX18rY3j/AAAAAKo28xp24gBJ
    U2FsdGVkX18rY3j/AAAAAKo28xp24gBJ

    U2FsdGVkX18rY3j/AAAAAC8QdqsOdhZjSGICbUrSy0xrsI5JXr8KgAitCn2PtYxhEvN7A9x0iKnnHTRmarTzTjAK9vBy4sDQQyxOAQgSWO4=
    U2FsdGVkX18rY3j/AAAAABTlhjN/yYk/
        U2FsdGVkX18rY3j/AAAAAJ3fq+/nz83SuBSPuqcV9pspII5ZhTMODm+K/7/rHX5Z0UHXkPy8qN9bMnj6/EuPSIEFYfwvVEPhI3U/tK0u4opj/fzJQunbETQHMzUyrIOSLfXoZ6S1FhMl1IBGV7fU/QyXFNB93DId+G89zYdOPdh2pj34pAcchwxUVNwPa5LHeRgeiZqsT4pJPTJpEXrcFnR/jriccamp3R1qfiU551fbaCk0mp7PDw==
    U2FsdGVkX18rY3j/AAAAAKo28xp24gBJ

    U2FsdGVkX18rY3j/AAAAAAlyu90ocyv9aGE1uJL+DBo=
    U2FsdGVkX18rY3j/AAAAALYF9qenfksnL8TORj2FnqE=
    U2FsdGVkX18rY3j/AAAAAIQ4God7QwjOH9qiW9k7/BcuVIPGhIIxXw==
U2FsdGVkX18rY3j/AAAAACyRUNu3KUfp
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
