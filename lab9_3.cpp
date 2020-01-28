#include <iostream>         //cout << "Number of data = ";
#include <fstream>           //cout << "Number of data = ";
#include <string>           //cout << "Mean = ";
#include <cmath>            //<< "Standard deviation = ";
using namespace std;

int main(){
    ifstream score;
    score.open("score.txt");
    string textline;
    double sum = 0, mean,sd,num=0;
    while(getline(score,textline)){
        sum += atof(textline.c_str());
        num++;  
    }
    cout << "Number of data = " << num << endl;
    mean = 1/num*sum;
    cout << "Mean = " << mean << endl;
    sd = pow((pow(sum,2)/num)-pow(mean,2),0.5);
    cout << "Standard deviation = " << sd << endl;
    return 0;
}
    
    
    


