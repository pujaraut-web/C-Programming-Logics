#include<iostream>
using namespace std;



checkpalindrome(string s, int i, int j)
{
	while(i<j)
	{
	if (s[i]!=s[j])
	return false;
	i++;
	j--;
	}
	return true;
}
int main()
{ 
	
string input;
cout<<"enter ur string";
cin>>input;
int n=input.length();
int i;
for(i=0;i<n;i++)
{
	if(checkpalindrome(input,i,n-1))
	{
	break;
	}
}
	cout<<i;
	return 0;


}
