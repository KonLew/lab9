/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
using namespace std;

int main(){
    int a,h,b;
    string c;
    cout << "Enter your age: ";
    cin >> a;
    if (a <= 25){
        cout << "Enter your height: ";
        cin >> h;
        if (h<100) 
            c = "Chopper";
        else if (h<180)
            c = "Usopp";
            else{
                cout << "Enter your bounty: ";
                cin >> b;
                if (b>1100000000)
                    c = "Zoro";
                else c = "Sanji";    
            }
            
    }else{
        if (a<=60){
            cout << "Enter your bounty: ";
            cin >> b;
            if (b>500000000)
                c = "Jinbe";
            else c = "Franky";
        }else{
            c = "Brook";
        }
    }
cout << "Your character = " << c;
return 0;
}


