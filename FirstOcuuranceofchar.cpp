#include<iostream>
using namespace std;
int StrFirst(char *arr,char ch)
{
	int icnt=0;
		while(*arr!='\0')
	{
		if(*arr==ch)
		{   
			break;

		}
		arr++;
		icnt++;
	}
	if(*arr==ch)
	{
		return icnt; 
	}
	else
	{
		return -1;
	}
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

	ret= StrFirst(arr,ch);
	cout<<"first occurance of that letter is "<<ret;
	return 0;
}
