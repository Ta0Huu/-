#include<iostream>
#include<cmath>

using namespace std;

double adiff(double A,double B){
    double Y;
    while(A >360 or A < -360){
        if(A > 360){
            A = A-360;
        }
        else{
            A = A+360;
        }
    }
    while(B > 360 or B < -360){
        if(B > 360){
            B = B-360;
        }
        else{
            B = B+360;
        }
    }
    if ((360 - abs(A-B)) > abs(A-B)) {
    Y = abs(A-B);
    }
    else {
    Y = 360-abs(A-B);
    }
    return Y;
    
}

int main(){
  cout << adiff(180,270) << "\n";
  cout << adiff(210,45) << "\n";
  cout << adiff(0,360) << "\n";
  cout << adiff(10,350) << "\n";
  cout << adiff(95,260) << "\n";
  cout << adiff(90,-90) << "\n";
  cout << adiff(1000,280) << "\n";
  cout << adiff(60,244) << "\n";