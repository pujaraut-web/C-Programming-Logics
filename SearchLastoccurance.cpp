#include<iostream>
using namespace std;

int SearchLast(char  *arr,char ch)
{  
	int ipos=0,i=0;
	while(*arr !='\0')
	{
      if(*arr==ch)
      {
      	ipos=i;
      }
      i++;
      arr++;

	}
	return ipos;
}

int main()
{
    int ret=0;
	char ch='\0';
    char arr[30];

	cout<<"enter the string"<<"\n";
	cin>>arr;
	

	cout<<"enter the character"<<"\n";
	cin>>ch;

	ret= SearchLast(arr,ch);
	cout<<"last occurance of that letter is "<<ret;
	return 0;
}
