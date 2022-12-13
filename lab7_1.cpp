#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
    string z,y;
    cout << "Input text: ";
    cin >> z;
    cout << "Reversed text: " << func1(z) << "\n";
    cout << "Palindrome: ";
    if(func2(z) == func2(func1(z))){
    cout << "Yes";
    }
    else{
    cout << "No";
    }
}
