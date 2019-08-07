cmake_minimum_required(VERSION 3.14)
project(swift-mt-core)

add_library(swift-mt-core SHARED parse/SwiftMtParser.h parse/SwiftMtParser.cpp)