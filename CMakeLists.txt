cmake_minimum_required(VERSION 3.10)

project(LeetCode150)

set(CMAKE_CXX_STANDARD 17)

# Include header files
include_directories(include)

# Liệt kê trực tiếp các file cpp
add_executable(LeetCode150
    src/main.cpp
    src/merge_sorted_array.cpp
    src/remove_element.cpp
    src/remove_duplicates_from_sorted_array.cpp
    src/best_time_to_buy_and_sell_stock.cpp
    src/best_time_to_buy_and_sell_stock_II.cpp
)
