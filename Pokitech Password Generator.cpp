#include <iostream>
#include <ctime> //the password generator will get a different password everytime idg lol
#include <cstdlib> // cstdlib will be used to like idk randomly make your password
#include <vector>//creates a list
#include <string>
#include <random>//help get a random thing from a list
#include <chrono>
#include <fstream>
using namespace std; //this is a general update of my old password generator i want to test if i can make a manager aswell 

int main(){
    ofstream passkeySaver("passkeys.txt");

    vector<string> items={"Mouse", "Anime", "Miku", "Tuesday", "Guitar", "Miku@", "tu3sday", "@nim3", "M0use", "Gu1t@r", "TakeshitaSt", "T@k3sh1t@St"}; //random words ig this is essential but you can change the words to whatever word you want please dont use a phrase though because its annoying lol
    srand(time(nullptr));// i think this gives you a random number every time you use if idk breh im dumb

    if (items.empty()){
        cout<<"cant generate a password";
        return 1;
    }
   
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>distrib(0, items.size()-1);
    int randomIndex = distrib(gen);

        //second list of random shit
    vector<string> symbols={"@","#","$","%","!","&","?","+","-","=","_","*"};

        if (symbols.empty()){
        cout<<"cant generate a symbol but can still make password";
        return 1;
    
    }

    int randomNumnber = (rand()%100)+1;
    int randomSecondNumber=(rand()%100)+21;
    int randomMultiplierNumber = (rand()%100)+51;
    string randomWord = items[randomIndex]; //from the list of the random ahh words
    string randomSymbol = symbols[randomIndex]; //you get it atp its a random ass symbol 
    

    passkeySaver<<"Your randomly generated password is : " <<randomNumnber+randomSecondNumber*randomMultiplierNumber<<randomWord<<randomSymbol<<randomNumnber*randomMultiplierNumber-randomSecondNumber<<"\n" "DON'T LET ANYONE ELSE SEE THIS PASSWORD";
    passkeySaver.close();
}
