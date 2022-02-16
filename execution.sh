#!/bin/bash

for i in 2 4 8 16
do
	g++ -Wall p.cpp -o  p.out -lOpenCL -std=c++11
	time ./p.out $i
done
