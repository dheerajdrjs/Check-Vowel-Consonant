// WAP to Check Whether a character is Vowel or a Consonant.

#include<iostream>
using namespace std;

int main()
{
	char c;
	cout<<"Enter a character : ";
	cin>>c;
	
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
		cout<<endl<<c<<" is vowel";
	else
		cout<<endl<<c<<" is consonant";
	
	return 0;
}
