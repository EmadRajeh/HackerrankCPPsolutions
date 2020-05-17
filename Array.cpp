#include <cmath>
 #include <cstdio>
 #include <vector>
 #include <iostream>
 #include <algorithm>
 #include <cmath>
 #include <bits/stdc++.h>
 using namespace std;


 int main() {
     // Enter your code here. Read input from STDIN. Print output to STDOUT
    
     int n;
     cin >> n;
     const int size = n;
     int* array = new int[size];
     for (int i = 0; i < size; ++i) {
         cin >> array[i];
     }
     for (int i = n -1; i >= 0; --i) {
         cout << array[i] << " ";
     }
     return 0;
 }
