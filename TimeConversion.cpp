#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
void timeConversion(string s) {
    /*
     * Write your code here.
     */
     int h1 =(int) s[1] - '0';
    int h2 = (int) s[0] - '0';
    int hh = (h2 * 10 + h1 % 10);
    
    if(s[8] == 'A'){
        if (hh == 12) {
            cout << "00";
            for (int i{2}; i <= 7; i++) {
                cout << s[i];
            }
            cout << "\n";
        }else{
            for (int i{0}; i <= 7; i++) {
                cout << s[i];
            }
            cout << "\n";
        }
    } else{
        if (hh == 12) {
            cout << hh;
            for (int i{2}; i <= 7; i++) {
                cout << s[i];
            }
            cout << "\n";
        }else{
            hh += 12;
            cout << hh;
            for (int i{2}; i <= 7; i++) {
                cout << s[i];
            }
            cout << "\n";
        }
    }

}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    timeConversion(s);

    

    return 0;
}
