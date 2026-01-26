#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

bool validAnagram(string s1,string s2)
{
    unordered_map<char,int>m;//character,frequency

    for(int i=0;i<s1.size();i++){
        if(m.count(s1[i])){
            m[s1[i]]++;
        }else{
            m[s1[i]]=1;
        }
    }

    //2nd to look for s2 characters in frequency

    for(int i=0;i<s2.size();i++)
    {
        if(m.count(s2[i])){
            m[s2[i]]--;
            //if frequncy is -ve
            if(m[s2[i]]==0)
            {
                m.erase(s2[i]);
            }
        }else{
            return false;
        }
    }
    return m.size()==0;
}

int main(){
    string s1="race";
    string s2="care";

    cout<<validAnagram(s1,s2);


    return 0;
}