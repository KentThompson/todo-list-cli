#include "cli.h"
#include <iostream>
#include <string>

int run_cli(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage:\n"
                  << "  todo add <text>\n"
                  << "  todo list\n"
                  << "  todo done <id>\n";
        return 1;
    }

    std::string command = argv[1];

    if (command == "add") {
        std::cout << "Add command not implemented yet\n";
    } else if (command == "list") {
        std::cout << "List command not implemented yet\n";
    } else if (command == "done") {
        std::cout << "Done command not implemented yet\n";
    } else {
        std::cout << "Unknown command: " << command << "\n";
        return 1;
    }

    return 0;
}
