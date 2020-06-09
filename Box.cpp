//
//  main.cpp
//  HackerrankC++
//
//  Created by Emad Rajeh on 04/02/2020.
//  Copyright © 2020 Emad Rajeh. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Box{
    friend bool operator<(Box &A, Box &B);
    friend ostream &operator<<(ostream &os, Box &b);
private:
    int length;
    int breadth;
    int height;
public:
    //constrs. and deconstr.
    Box();
    Box(int l, int b, int h);
    Box(const Box &B);
    ~Box();
    
    //methods
    int get_length(){return length;}
    int get_breadth(){return breadth;}
    int get_height(){return height;}
    long long CalculateVolume(){return 1LL * length * breadth * height;}
    
    
};

Box::Box()
:length(0), breadth(0), height(0){
    
}
Box::Box(int l, int b, int h)
:length(l), breadth(b), height(h){
    
}
Box::Box(const Box &B)
    :Box{B.length,B.breadth,B.height}{
    
}
Box::~Box(){
    
}
//overloading the less than operator
bool operator<(Box &A, Box &B){
    if(A.length < B.length){
        return true;
    }else if(A.breadth < B.breadth && A.length == B.get_length()){
        return true;
    }else if (A.height < B.height && A.length == B.length && A.breadth == B.breadth){
        return true;
    }else{
        return false;
    }
}

//overloading the insertion operator
ostream &operator<<(ostream &os, Box &B){
    os << B.length << " " << B.breadth << " " << B.height;
    
    return os;
}

void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main() {
    
check2();
    


    
    return 0;
}



