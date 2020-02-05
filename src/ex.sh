#!/bin/bash
rm -rf ../tmp/*
g++ -std=c++17 main.cpp human.cpp employee.cpp fileio.cpp -lstdc++fs -o a.out
