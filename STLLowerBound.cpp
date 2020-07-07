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

void display(const vector<int> &v){
    cout << "[ ";
    for(auto i : v)
        cout << i << " ";
    cout << "]\n";
    
}

int main () {
    

    int N, x;
    vector<int> v;
    cin >> N;
    for (int i{1}; i <= N; ++i) {
        cin >> x;
        v.push_back(x);
    }
    int Q;
    cin >> Q;
    for (int i{0}; i < Q; ++i) {
        cin >> x;
        auto it = lower_bound(v.begin(), v.end(), x);
       
        cout << (*it == x ? "Yes " : "No ") << it - v.begin() + 1 << "\n";
    }
    
    
    return 0;
}
