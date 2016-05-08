//
// Created by Byron on 5/7/2016.
//

#ifndef UCD_CSCI2312_PA5_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_LESS_FUNCTOR_H

#include <string.h>

namespace CS2312 {

    template <class T>
    class less{
    public:

        bool operator ()(T const &lhs, T const &rhs){
            return lhs < rhs;
        };
    };

    //c-string specialization
    template <>
    class less<const char *> {
    public:
        bool operator() (const std::string &lhs, const std::string &rhs){

            string sLhs = lhs;
            string sRhs = rhs;

            return lhs < rhs;
        };
    };


    //string specialization
    template <>
    class less<std::string> {
    public:
        bool operator() (const std::string &lhs, const std::string &rhs){
            return lhs < rhs;
        };
    };



}

#endif //UCD_CSCI2312_PA5_LESS_FUNCTOR_H
