//
//  main.cpp
//  Standard Template Library
//
//  Created by Emad Rajeh on 27/06/2020.
//  Copyright © 2020 Emad Rajeh. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

#define nline "\n"
using namespace std;


int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();

#define endl '\n';

int main () {
    

    map<string, int> grades;
    int q, n, y;
    string x;
    cin >> q;
    for (int i{0}; i < q; ++i) {
        cin >> n >> x;
        if(n == 1){
            cin >> y;
            grades[x] += y;
        }else if(n == 2){
            grades.erase(x);
        }else{
            auto it = grades.find(x);
            if (it != grades.end()) {
                cout << it->second << "\n";
            }else{
                cout << 0;
            }
        }
    }
    return 0;
}
