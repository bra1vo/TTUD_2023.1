#include <bits/stdc++.h> 

using namespace std;

int main() { 
    freopen("input.txt","r",stdin);

    string s;
    while (cin >> s){
        cout<<s<<endl;
    }
    
    while (!feof(stdin)){
        char c = fgetc(stdin);
        printf("%c", c);
    }

    return 0;
}