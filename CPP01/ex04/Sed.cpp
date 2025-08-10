#include "Sed.hpp"

Sed::Sed(const std::string &filename, const std::string &s1, const std::string &s2)
    : _filename(filename), _s1(s1), _s2(s2) {}

void Sed::printError(const std::string &message) const {
    std::cerr << "Error: " << message << std::endl;
}

bool Sed::process() {
    std::string content;
    std::string result;
    std::string::size_type pos;
    std::string::size_type found;
    std::string outfile;
    pos = 0;
    found = 0;
    if (_s1.empty()) {
        printError("Search string cannot be empty");
        return false;
    }
    std::ifstream input(_filename.c_str());
    if (!input.is_open()) {
        printError("Could not open file: " + _filename);
        return false;
    }
    content = std::string((std::istreambuf_iterator<char>(input)), std::istreambuf_iterator<char>());
    input.close();
    while ((found = content.find(_s1, pos)) != std::string::npos) {
        result.append(content.substr(pos, found - pos));
        result.append(_s2);
        pos = found + _s1.length();
    }
    result.append(content.substr(pos));
    outfile = _filename + ".replace";
    std::ofstream output(outfile.c_str());
    if (!output.is_open()) {
        printError("Could not open output file: " + outfile);
        return false;
    }
    output << result;
    output.close();
    return true;
}
