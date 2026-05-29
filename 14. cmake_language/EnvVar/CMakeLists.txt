cmake_minimum_required(VERSION 3.18)

project(EnvVarDemo)

message("1 env: $ENV{OS}")

set(ENV{OS} "Linux")

message("2 env: $ENV{OS}")