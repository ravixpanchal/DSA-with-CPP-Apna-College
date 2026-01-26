#include<iostream>
#include<stack>
using namespace std;

bool validParanthesis(string str){
    stack<char>s;

    for(int i=0;i<str.size();i++){
        int ch=str[i];

        if(ch=='(' || ch=='{' || ch=='['){
            s.push(ch);  //opening
        }
        else{
            if(s.empty()){
                return false;
            }

            //match
            int top=s.top();
            if((top=='('&& ch==')')||
               (top=='{'&& ch=='}') ||
               (top=='['&& ch==']') ){
                s.pop();
               }else{
                return false;
               }
        }
    }


  return s.empty();  

}


int main (){
    string str1="([}])";//invalid false
    string str2="([{}])";//invalid true

    cout<<validParanthesis(str1)<<endl;
    cout<<validParanthesis(str2)<<endl;

return 0;
}