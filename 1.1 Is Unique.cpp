#include <iostream>
using namespace std;

bool isUnique(string str){
    for(int i=0; i<str.length()-1; i++){
        for(int j=i+1; j<str.length(); j++){
            if(str[i] == ' ' || str[j] == ' '){
                continue;
            }
            if(str[i] == str[j]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    cout << "Enter the String: ";
    string str;
    getline(cin, str);

    if(isUnique(str)){
        cout << "The String '" << str << "' has all unique characters";
    }
    else{
        cout << "The String '" << str << "' has duplicate characters";
    }
    return 0;
}

Time Complexity: O(N log N)  
Auxiliary Space: O(1)
