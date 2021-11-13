#include <iostream>
#define MAX_SIZE 100 // Maximum size of the string
using namespace std;
 
int main() {
 
    char text1[MAX_SIZE], text2[MAX_SIZE];
    char * str1 = text1;
    char * str2 = text2;
 
    // Inputting string from user
    cout<<"Enter any string: "<<endl;
    cin>>text1;
 
    // Coping text1 to text2 character by character
    while(*(str2++) = *(str1++));
 
    cout<<"First string: "<<text1<<endl;;
    cout<<"Second string: "<<text2<<endl;
 
    return 0;
}
