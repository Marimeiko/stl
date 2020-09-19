#pragma once

#include <deque>
#include <forward_list>
#include <string>

bool compare(const std::string& first, const std::string& second);
std::deque<std::string> lengthSort(const std::forward_list<std::string>& flist);
