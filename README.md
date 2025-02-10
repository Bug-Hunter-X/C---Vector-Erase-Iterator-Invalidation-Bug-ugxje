# C++ Vector Erase Iterator Invalidation Bug

This repository demonstrates a common yet subtle bug in C++ when using `std::vector::erase`.  Incorrectly removing elements from a vector while iterating can lead to unexpected behavior due to iterator invalidation.

The `bug.cpp` file shows the buggy code, while `bugSolution.cpp` provides the corrected version. The bug is explained in detail in the comments within the code.