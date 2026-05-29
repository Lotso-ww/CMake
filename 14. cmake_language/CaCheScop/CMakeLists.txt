cmake_minimum_required(VERSION 3.18)

project(CacheScopDemo)

set(OS "mac" CACHE STRING "os name" FORCE)

message("OS: ${OS}")
# message("OS: $CACHE{OS}")s
