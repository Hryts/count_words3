//
// Created by hryts on 5/16/20.
//

#ifndef WORDS_COUNT_TBB_READ_CONFIG_H
#define WORDS_COUNT_TBB_READ_CONFIG_H

#include <unordered_map>
#include <functional>
#include <algorithm>

std::unordered_map<std::string, std::string> read_conf(const std::string &conf_file_name="../config.dat");

#endif //WORDS_COUNT_TBB_READ_CONFIG_H
