#include <iostream>
#include "read_config.h"

int main() {
    auto config = read_conf();
    size_t merging_threads=std::stoi(config["threads"]);
    size_t indexing_threads=std::stoi(config["indexing_threads"]);
    size_t max_words=std::stoi(config["max_words"]);
    size_t queue_limit=std::stoi(config["queue_limit"]);




    return 0;
}
