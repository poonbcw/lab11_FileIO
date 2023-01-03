#include <iostream>
#include <iomanip>
#include<fstream>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int i = 0;
    double sum = 0;
    double sum2 = 0;
    double data[83] ={};
    ifstream source("score.txt");
    string textline;
    while(getline(source,textline)){
        data[i] = atof(textline.c_str());
        sum += data[i];
        sum2 += pow(data[i],2);
        i++;
    }
    cout << "Number of data = " << i << "\n";
    cout << setprecision(3);
    cout << "Mean = " << sum/i << "\n";
    cout << "Standard deviation = " << sqrt((sum2/i)-pow(sum/i,2));
    
    source.close();
    return 0;
}