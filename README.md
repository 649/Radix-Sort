# Radix Sort

> Author: [@037](https://twitter.com/037)

### Compile
```
sudo g++ -std=c++11 -o RadixSort.exe RadixSort.cpp
```

### Input structure
The input starts with an integer number which indicates the number of vectors to be sorted. Then vectors follow, one vector per line. Each vector consists of 10 numbers where each number has a value in f0; 1; 2; 3g. Entries of a vector are separated by a space.

### Output structure
Outputs the sorted sequence of vectors, one per line.

### Example

*Input*
```
5
3 3 3 3 3 2 2 2 2 2
2 3 2 2 2 2 2 2 2 2
1 3 0 0 2 1 0 0 0 0
1 3 0 0 2 2 0 0 0 0
2 3 2 1 2 2 2 2 2 2
```

*Output*
```
1;3;0;0;2;1;0;0;0;0;
1;3;0;0;2;2;0;0;0;0;
2;3;2;1;2;2;2;2;2;2;
2;3;2;2;2;2;2;2;2;2;
3;3;3;3;3;2;2;2;2;2;
```