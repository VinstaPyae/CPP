#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <iostream>
#include <fstream>

class Sed {
private:
    std::string _filename;
    std::string _s1;
    std::string _s2;
public:
    Sed(const std::string &filename, const std::string &s1, const std::string &s2);
    bool process();
    void printError(const std::string &message) const;
};

#endif
