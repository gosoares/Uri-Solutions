#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    char ch;
    bool check;
    set < char > sd,sd1;
    sd.insert('J');sd1.insert('j');sd.insert('B');sd1.insert('b');
    sd.insert('V');sd1.insert('v');sd.insert('Z');sd1.insert('z');
    sd.insert('S');sd1.insert('s');sd.insert('P');sd1.insert('p');
    sd.insert('X');sd1.insert('x');
    while((ch = getchar()) != EOF)
    {
        if(sd.count(ch) != 0) ch = 'F';
        else if(sd1.count(ch) != 0)ch = 'f';

        if(!((ch == 'f' or ch == 'F') and check))cout << ch;
        if(ch == 'f' or ch == 'F')check = true;
        else check = false;
    }
    return 0;
}