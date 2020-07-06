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



int main(int argc, const char * argv[]) {
    // insert code here...

    
    int n, x, y;
    set<int> nums;
    cin >> n;
    for(int i{0}; i < n; i++) {
        cin >> x >> y;
       
        switch (x) {
            case 1:
                nums.insert(y);
                break;
            case 2:
                nums.erase(y);
                break;
            case 3:
                cout << ((nums.find(y) == nums.end())? "No": "Yes") << "\n";
                break;
        }
    }
    



    return 0;
}
