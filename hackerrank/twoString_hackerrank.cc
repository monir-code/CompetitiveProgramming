#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {

    int szs1 = s1.size(), szs2 = s2.size();
    int match = 0;

    //cout<<szs1<<szs2<<endl;

    map<char, int>m;

    for(int i = 0; i < szs1; i++)
    {
        m[s1[i]] = 1;
    }
    for(int i = 0; i < szs2; i++)
    {
        if(m[s2[i]] == 1)
        {
            match = 1;
            break;
        }
    }

    string s;
    if(match == 0) s = "NO";
    else if(match == 1) s = "YES";

    return s;


}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);
        //getchar();

        string s2;
        getline(cin, s2);
        //getchar();

        string result = twoStrings(s1, s2);

        cout << result << "\n";
    }

    //fout.close();

    return 0;
}
