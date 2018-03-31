#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string line, sa, sb, sc;
    int a, b, c, pplus, pequal;

    while(getline(cin, line)){
        for(int i = 1; i < line.size(); i++){
            if(line[i] == '+'){
                pplus = i;
            }else if(line[i] == '='){
                pequal = i;
                break;
            }
        }

        sa = line.substr(0, pplus);
        sb = line.substr(pplus+1, pequal-pplus-1);
        sc = line.substr(pequal+1, line.size() - pequal-1);

        reverse(sa.begin(), sa.end());
        reverse(sb.begin(), sb.end());
        reverse(sc.begin(), sc.end());

        a = stoi(sa);
        b = stoi(sb);
        c = stoi(sc);

        cout << (a + b == c ? "True" : "False") << endl;

        if(a + b + c == 0)
            break;
    }

    return 0;
}
