/*
 * Encode / Decode lib for C++
 */

#ifndef string
    #include <iostream>
    using namespace std;
#endif

string encrypt(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] += 1;
    }
    return str;
}

string decrypt(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] -= 1;
    }
    return str;
}