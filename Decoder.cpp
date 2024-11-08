#include <iostream>
#include <string>

using namespace std;

int main() //Converts the encoded text into the original message
{
    string output;
    string text;

    cout<<"Inserisci codice compatto: \n";
    cin>>text;
    text = text + "|";
    int size = text.size();
    
    int num = 0;
    char carattere;
    bool status = true; //true quando deve vedere un carattere
    
    for (int i=0; i<size; i++) {
        if (status){
            carattere = text[i];
            status = false;
        } else if (text[i] != '|') {
            num = num*10 + (text[i] - '0');
        } else {
            for (int j=0; j<num; j++){
                output += carattere;
            }
            status = true;
            num = 0;
        }
    }
    
    cout<<output;
    
    return 0;
}
