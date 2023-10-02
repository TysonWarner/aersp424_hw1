cmake_minimum_required(VERSION 3.1)
project("homework1")
set(CMAKE_CXX_STANDARD_20)
add_executable(${CMAKE_PROJECT_NAME}
					main.cpp
					RollRate.cpp
					RollRate.h
					print.cpp
					print.h
				)