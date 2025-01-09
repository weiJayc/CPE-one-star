#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    bool flag = false;
    while(getline(cin, word)){
        if(flag) cout << endl;
        flag = true;
        
        int arr[150] = {0};
        for(int i = 0; i < word.size(); i++){
            arr[word[i]]++;
        }
        int min = 0;
        int index = 0;
        while(min != 999){
            min = 999;
            for(int i = 0; i < 150; i++){
                if(min >= arr[i] && arr[i] != 0){
                    min = arr[i];
                    index = i;
                }
            }
            if(min != 999){
                cout << index << " " << min << endl;
                arr[index] = 0;
            }
        }
    }
}