
#include <iostream>
using namespace std;

//This function receives text and shift and returns the encrypted text
string decrypt(string text,int s)
{
	string result="";
	//traverse text
	for(int i=0;i<text.length();i++)
	{
		//apply transformation to each character
		//decrypt Uppercase letters
		if(isupper(text[i]))
			result+=char(int(text[i]+s-65)%26 +65);
	//decrypt Lowercase letters
	else
		result+=char(int(text[i]+s-97)%26 +97);
	}
	//Return the resulting string
	return result;
}
int main()
{
	string text;
	int s;
    getline(cin,text);
    cin>>s;
	cout<<"Text :"<<text;
	cout<<"\nShift:" << s;
	s = s%26; // ensuring that s lies between 0-25
	cout<<"\nCipher:"<<decrypt(text, 26-s);
	return 0;
}