#include <iostream>
#include <vector>
using namespace std;

int main(){
    // cout<<"Whoai";
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code!"};
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}