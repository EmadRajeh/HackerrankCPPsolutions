 vector<int> parseInt(string str){
     stringstream ss{str};
     vector<int> numbers;
     char ch;
     int temp;
     while (ss >> temp) {
         numbers.push_back(temp);
         ss >> ch;
     }
     return numbers;
 }
 int main(void){
 
 string str;
    cin >> str;
    vector<int> integers = parseInt(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << endl;
    }
 }
 
