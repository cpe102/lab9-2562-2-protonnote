#include <iostream>
#include<fstream>
#include <string>
using namespace std;

int main(){
    ifstream cheer;
    ofstream cheerbook;
    cheer.open("cheerbook.txt");
    cheerbook.open("cheerbook_copy.txt");
    string textline;
    cheerbook << "-------------------- SOTUS ---------------------" << endl;
    bool counttext;
        counttext = getline(cheer,textline);
        getline(cheer,textline);
    while (counttext){
        cheerbook << textline << endl;
        counttext = getline(cheer,textline);
    }
    cheerbook << "-------------------- SOTUS ---------------------";
    return 0;
}

//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
