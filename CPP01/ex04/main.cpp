#include "Sed.hpp"

int main(int argc, char *argv[]) {
    if (argc == 4) {
        Sed sed(argv[1], argv[2], argv[3]);
        if (!sed.process()) {
            return 1;
        }
    }
    else {
        std::cerr << "Usage: " << argv[0] << " <filename> <search_string> <replace_string>" << std::endl;
        return 1;
    }
    return 0;
}