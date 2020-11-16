#include<iostream>
#include<cstring>
using namespace std;
////////////////
class Solution {
public:
    string breakPalindrome(string s) {
        int n=s.size(),i,j,flags=0;
        if(n==1)
            return "";
        if(n%2==0)
        {
            for(i=0;i<n;i++)
            {
                if(s[i]!='a')
                {
                    flags=1;
                    s[i]='a';
                    break;
                }
            }
            if(flags==0)
            {
                s[n-1]='b';
            }
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(s[i]!='a' && i!=n/2)
                {
                    flags=1;
                    s[i]='a';
                    break;
                }
            }
            if(flags==0)
            {
                s[n-1]='b';
            }
        }
        return s;
    }
};
//////////////////
int main()
{
	Solution obj;
	cout<<obj.breakPalindrome("aaccba");
	return 0;
}
