class Student{
public:
    int scores;
public:
    void input();
    int calculateTotalScore();
};

void Student::input(){
    int x;
    for (int i = 0; i < 5; i++) {
        cin >> x;
        if (x >= 0 && x <= 50) {
             scores += x;
        }
        cout << "scores: " << scores << line;
    }
   
};

int Student::calculateTotalScore(){
    return scores;
};


int main(){
    
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
       
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }
    
    
    // calculate kristen's score
    int kristen_score = s[2].calculateTotalScore();
    
    // determine how many students scored higher than kristen
    int count = 0;
    for(int i = 0; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
     cout << count << "\n";
    
    return 0;
}
