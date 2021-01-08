#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(){
    int count=0;
    float sum,sumSq,mean,stdDev;
    string textline;
    ifstream source;
	source.open("score.txt");
    while(getline(source,textline))
    {
        sum += atof(textline.c_str());
        sumSq += pow(atof(textline.c_str()),2);
        count++;
    }

	mean=(float)sum/count;
	stdDev=pow((float)1/count*sumSq-(float)pow(mean,2),0.5);
   
    cout << "Number of data = " << count << '\n';
	cout << setprecision(3);
    cout << "Mean = " << mean << '\n';
    cout << "Standard deviation = " << stdDev << endl;

    return 0;

}