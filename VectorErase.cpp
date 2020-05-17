 int n,q;
 cin >> n;
 
 vector<int> v;
 for (int i = 0; i < n; i++) {
     cin >> q;
     v.push_back(q);
     //cout << "i: " << x << line;
 }
 
 cin >> q;
 if(q < v.size()){
     v.erase(v.begin() + q - 1);
 }
 
 int a, b;
 cin >> a >> b;
 if(a < b && b < v.size()){
     v.erase(v.begin() + a -1, v.begin() + b - 1);
 }
 
 cout << v.size() << "\n";
 for(auto i : v){
        cout << i << " ";
    }
 cout << "\n";
