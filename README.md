# Performance Issue in Prime Number Generation using std::vector<bool>

This repository demonstrates a performance issue in a C++ program designed to generate a boolean vector indicating prime numbers up to a given limit (n). The original implementation suffers from redundant checks, especially for large inputs.

## Problem Description

The provided C++ code utilizes `std::vector<bool>` to store prime numbers.  The Sieve of Eratosthenes algorithm is employed. However, the nested loop in the implementation performs several unnecessary checks, affecting performance for larger values of n.

## Solution

The solution addresses the performance issue by optimizing the inner loop of the Sieve algorithm, avoiding unnecessary iterations.  This leads to significantly improved efficiency for larger inputs.

## Usage

Clone the repository and compile the code (both bug.cpp and bugSolution.cpp) using a C++ compiler (such as g++).

Run both the buggy and improved versions to compare their execution times for various input sizes.

## Contributing

Contributions are welcome. Please raise issues or submit pull requests to improve the code or documentation.