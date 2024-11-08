#include <iostream>
#include <string>

using namespace std;

int main() //Converts a string like AAABBAAA|||HHHHJJ into an optimized code that can be decoded
{
    string output;
    string text;
    cout<<"Insert Sequence: \n";
    cin>>text;
    int size = text.size();
    
    char lastChar;
    int counter = 0;
    
    cout<<lastChar;
    for (int i = 0; i < size; i++){
        if (lastChar==text[i]) {
            counter++;
        } else {
            if (lastChar != '\0'){
                output = output + lastChar + to_string(counter) + "|";
            }
            lastChar = text[i];
            counter = 1;
        }
    }
    output = output + lastChar + to_string(counter);
    
    cout<<output;
    return 0;
}
