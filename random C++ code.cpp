#include <iostream>
#include <ctime> //the password generator will get a different password everytime idg lol
#include <cstdlib> // cstdlib will be used to like idk randomly make your password
#include <vector>//creates a list
#include <string>
#include <random>//help get a random thing from a list
#include <chrono>
#include <fstream>
using namespace std;

//READ ME. This is my first fully working or not working C++ code thing, i am an ametruere to coding and this code may or may not have some errors. Since this is open source i advise you to change the code if theres any errors. i do plan on expanding on the password genertator thingy i just dont have the skills for it yet

int main(){

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


    int randomNumber = (rand()%100)+1; //this generates a random ahh number between 0-100
    int secondrandomNumber = (rand()%100)+1; //this also generates a random number
    string randomWord = items[randomIndex]; //from the list of the random ahh words
    string randomSymbols = symbols[randomIndex]; //you get it atp its a random ass symbol 
    string password= randomNumber<<randomWord<<randomSymbols<<secondrandomNumber + randomNumber;
    cout<<"Your randomly generated password is: \n"; //this is your fuckass password please dont reuse it for everything because it'ss be very easy for someone to hack into your accounts please use atleast 10 random passwords from this thing and write them down because this is also a random thing but slightly predictable
    cout<< password;//for this your password will always be a random number between 0-100, a random word from the list i made, a random symbol, another random number from 0-100 + another random number between 0-100.
    return 0;

    ofstream passes("passes.txt"); //this should make a password file which will store some passwords lol
    passes<< password;
    passes.close();
}