#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

void SubStringContainer(string str, string subString, int j){
        int strSize = str.length() - 1;
        int partSize, subStrSize = subString.length();
        bool flag, coun = 0;

        while(str[j] != ' '){
            j++;
        }
        cout << j;




        //SubStringContainer(str, subString, j+1);
}

int main()
{
    int strSize;
    cout << "Enter the string size: ";
    cin >> strSize;
    char str[strSize];
    cout << "Enter the string: ";
    for(int i = 0; i < strSize; i++){
        cin >> str[i];
    }
    string subStr = "sun";
    SubStringContainer(str, subStr, 0);
    return 0;
}
