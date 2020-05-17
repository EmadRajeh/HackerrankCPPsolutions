#include <stdio.h>
 #include <bits/stdc++.h>
 #include <cmath>
 using namespace std;
 void update(int *a,int *b) {
     // Complete this function
     int num1 = *a + *b;
     cout << num1 << endl;
     int num2 = abs(*a - *b);
     cout << num2 << endl;
 }

 int main() {
     int a, b;
     int *pa = &a, *pb = &b;
     
     scanf("%d %d", &a, &b);
     update(pa, pb);
     

     return 0;
 }
