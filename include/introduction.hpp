/* Introduction class.
 * @file
 * @date 2021-09-04
 * @author Grechishkin Denis
 */

#ifndef __INTRODUCTION_HPP__
#define __INTRODUCTION_HPP__

#include <string>

//{
class introduction
{
public:
    std::string_view name() const
    {
        return Denis
    }

    std::string_view surename() const
    {
        return Grechishkin
    }

    std::string fullname() const
    {
        return Denis_Grechishkin
    }

private:
};
//}

#endif // __INTRODUCTION_HPP__
