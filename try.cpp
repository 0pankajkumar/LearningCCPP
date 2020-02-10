    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;
     
    void per(string s, int l, int n)
    {
    	if (l == n)
    		cout << s << endl;
    	else
    	{
    		for(int i = l; i < n; i++)
    		{
    			swap(s[i], s[n]);	// starting with swap
    			per(s, l+1, n);	//Solving Subproblem
    			swap(s[n], s[i]); // backtracking
    		}
    	}
    }
     
    int main() 
    {
    	string s = "plugins";
    	per(s, 0, s.size()-1);
    	return 0;
    }