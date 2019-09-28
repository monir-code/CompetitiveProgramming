
#include <bits/stdc++.h>

using namespace std;

// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(string s) {

    map<string, long long>numanagram;

    int len = s.size();

    for(int i = 0; i < len; i++)
    {
        //numanagram[s[i]]++;
        for(int j = 1; j+i-1 < len; j++)
        {
            string t =s.substr(i, j);

            sort(t.begin(), t.end());
            numanagram[t]++;
        }
    }
   // int Size = numanagram.size();
    long long total = 0;
    for(map<string, long long>::iterator it = numanagram.begin(); it != numanagram.end(); it++)
    {
        total += (it->second * (it->second - 1) )/2;
    }
    return total;


}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = sherlockAndAnagrams(s);

        cout << result << "\n";
    }

    //fout.close();

    return 0;
}
