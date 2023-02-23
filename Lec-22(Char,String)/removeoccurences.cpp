#include<iostream>
using namespace std;
/*string removeOccurences(string s,string parts)
{
while(s.length()!=0 && s.find(parts)<s.length())
{
    s.erase(s.find(parts),parts.length());
} 
return s;
}*/

//Two pointer approach
string removeOccurences(string s, string part) {
        int i=0,j=0,k=part.length();
        //cout<<s.substr(0,3)<<endl;
        while(j<s.length()){
            if(j-i+1<part.length()){
                j++;
            }else if(j-i+1==k){
                if(s.substr(i,k)==part){
                    s.erase(i,k);
                    i=0;j=0;
                }else{
                    j++;i++;   //if not present
                }
            }
        }
        return s;
    } 
int main()
{
string s,parts;
cout<<"Enter the string:";
cin>>s;
cout<<"Enter the part you want to remove:";
cin>>parts;
cout<<"New string is:";
cout<<removeOccurences(s,parts);
}
//daabcbaabcbc=s
//abc=parts
//output=dab


