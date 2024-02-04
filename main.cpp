#include<bits/stdc++.h>
using namespace std;

int main(){
    string ch1,ch;
    cin>>ch;
    int nb=48,i=0;
    int l1=0,l=ch.length();
    while (l1!=l)
    {
        for (int i = 0; i < l; i++)
        {
            if (ch[i]==nb)
            {
                ch1=ch1+ch[i]+"+";

            }

        }
        l1=ch1.length()-1;
        nb++;

    }
   cout<<ch1.substr(0,l1)<<endl;

    return 0;
}
