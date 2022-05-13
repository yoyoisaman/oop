#include <iostream>
#include <string>

using namespace std;


int main (){
    string mon, day;
    cin >> mon >> day;


    if(stoi(mon)==1){
        if(stoi(day)<=20){
            cout << "Capricorn\n";
        }
        else{
            cout << "Aquarius\n";
        }
    }
    else if(stoi(mon)==2){
        if(stoi(day)<=18){
            cout << "Aquarius\n";
        }
        else{
            cout << "Pisces\n";
        }
    }

    else if(stoi(mon)==3){
        if(stoi(day)<=20){
            cout << "Pisces\n";
        }
        else{
            cout << "Aries\n";
        }
    }
    else if (stoi(mon)==4){
        if(stoi(day)<=20){
            cout << "Aries\n";
        }
        else{
            cout << "Taurus\n";
        }
    }
    else if(stoi(mon)==5){
        if(stoi(day)<=21){
            cout << "Taurus\n";
        }
        else{
            cout << "Gemini\n";
        }
    }
    else if(stoi(mon)==6){
        if(stoi(day)<=21){
            cout << "Gemini\n";
        }
        else{
            cout << "Cancer\n";
        }
    }
    else if(stoi(mon)==7){
        if(stoi(day)<=22){
            cout << "Cancer\n";
        }
        else{
            cout << "Leo\n";
        }
    }
    else if(stoi(mon)==8){
        if(stoi(day)<=23){
            cout << "Leo\n";
        }
        else{
            cout << "Virgo\n";
        }
    }
    else if(stoi(mon)==9){
        if(stoi(day)<=23){
            cout << "Virgo\n";
        }
        else{
            cout << "Libra\n";
        }
    }
    else if(stoi(mon)==10){
        if(stoi(day)<=23){
            cout << "Libra\n";
        }
        else{
            cout << "Scorpio\n";
        }
    }
    else if(stoi(mon)==11){
        if(stoi(day)<=22){
            cout << "Scorpio\n";
        }
        else{
            cout << "Sagittarius\n";
        }
    }
    else if(stoi(mon)==12){
        if(stoi(day)<=21){
            cout << "Sagittarius\n";
        }
        else{
            cout << "Capricorn\n";
        }
    }
    return 0;
}
