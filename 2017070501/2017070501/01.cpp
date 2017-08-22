#include<iostream>
using namespace std;
int main() {
	int ch;
	int nline=0, nword=0, nch=0;
	int isword = 0;
	cout << "please input text:" << endl;
	do
	{
		ch = cin.get();
		if (ch == '\n') nline++;
		if (ch != ' '&&ch != '\n'&&ch != '\t'&&ch!='EOF')
		{
			if(!isword)
			nword++;
			nch++;
			isword = 1;
		}
		else {
			isword = 0;
		}
	}while (ch != EOF);

	cout << "nline=" << nline << endl;
	cout << "nword=" << nword << endl;
	cout << "nch=" << nch << endl;
	return 0;
}