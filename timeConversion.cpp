//HAckrank problem solving

#include <bits/stdc++.h>
#include <cstring>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    vector<string> temp;
    string result;
    string ret;
    for (auto i = 0; i <s.length(); i++)
    {
        if(s[i]!=':')
          ret+=s[i];   
        else
        {
            temp.push_back(ret);
            ret.clear();
        }
    }
   
    auto zone=ret[2];
    ret.erase(2,2);
    int hr;
    if(zone=='P' && stoi(temp[0])+12<24)
        hr=stoi(temp[0])+12;
    else if(zone=='A'&& stoi(temp[0])>9)
        hr=12-stoi(temp[0]);
    else 
        hr=stoi(temp[0]);
  
    if(hr>=0 && hr<=9)
        result+='0';
    result+=to_string(hr);
    result+=":";
   
    for(int i=1;i<temp.size();i++)
    {
       result+=temp[i];
       result+=":";
    }
    result+=ret;
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
