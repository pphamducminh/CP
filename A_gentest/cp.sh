@echo off


g++ -O2 -DLOCAL -o sol sol.cpp
g++ -O2 -DLOCAL -o sol_brute sol_brute.cpp
g++ -O2 -DLOCAL -o gen gen.cpp