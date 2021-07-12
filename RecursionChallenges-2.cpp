#include <iostream>
#include <string>
using namespace std;
// void reverse(string str){
//     if(str.length()==0){
//         return;
//     }
//     string ros = str.substr(1);        // str.substr is an inbuilt function
//     reverse(ros);  
//     cout<<str[0];          
// }

// void replacePi(string s){
//     if(s.length()==0){
//         return;
//     }
//     if(s[0]=='p' && s[1]=='i'){
//         cout<<"3.14";
//         replacePi(s.substr(2));
//     }
//     else{
//         cout<<s[0];
//         replacePi(s.substr(1));
//     }
// }

// void towerOfHanoi(int n, char source, char dest,char helper){
//     if(n==0){
//         return;             //base case
//     }
//     towerOfHanoi(n-1,source,helper,dest);
//     cout<<"move from "<<source<<" to "<<dest<<endl;
//     towerOfHanoi(n-1,helper,dest,source);
// }

// string removeDuplicate(string str){
//     if(str.length()==0){
//         return "";
//     }
//     char ch = str[0];
//    string ans =  removeDuplicate(str.substr(1));
//     if(ch == ans[0]){
//         return ans;
//     }
//     return (ch+ans);
// }

// string moveX(string s){
//     if(s.length()==0){
//         return "";
//     } 
//     char ch = s[0];
//     string ans =  moveX(s.substr(1));
//     if(ch=='x'){
//         return ans+ch;
//     }
//     return ch+ans;
// }

// void subseq(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return ;
//     }
//     char ch =s[0];
//     string ros =s.substr(1);
//     subseq(ros,ans);
//     subseq(ros,ans+ch);

// }

// void subseqAscii(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return ;
// }
//     char ch=s[0];
//     int code = ch;
//     string ros = s.substr(1);
//     subseqAscii(ros,ans);
//     subseqAscii(ros,ans+ch);
//     subseqAscii(ros,ans + to_string(code));
// }

string keypadArr[] ={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keypad(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string code = keypadArr[ch-'0'];
    string ros = s.substr(1);
    for(int i=0;code.length();i++){
        keypad(ros,ans + code[i]);
    }
}


int main() {
    //reverse("suhani");
    //replacePi("pippppppixxspdipi");
    //towerOfHanoi(3,'A','B','C');
    //cout<<removeDuplicate("aaaeeebbbbdddccaaee")<<endl;
    //cout<<moveX("axxbdcefxhix")<<endl;
    //subseqAscii("AB","");
    keypad("23","");
    return 0;
}
