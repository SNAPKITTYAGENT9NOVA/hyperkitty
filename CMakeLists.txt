cmake_minimum_required(VERSION 3.20)
project(hyperkitty)
add_library(hyperkitty_bus reasoning/hyperkitty_bus.c)
target_include_directories(hyperkitty_bus PUBLIC reasoning)
