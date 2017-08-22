#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1,str2, str3, str4;
	char day, hour, minute;
	unsigned int i,j;
	int flag;
	cin >> str1 >> str2 >> str3 >> str4;
	for (i = 0; i < str1.size(),i<str2.size(); i++)
	{
		if (str1[i] == str2[i] &&str1[i] >= 'A'&&str1[i] <= 'G') {
			day = str1[i];
			switch (day)
			{
			case 'A':
				cout << "MON "; break;
			case'B':
				cout << "TUE "; break;
			case'C':
				cout << "WED "; break;
			case'D':
				cout << "THU "; break;
			case'E':
				cout << "FRI "; break;
			case'F':
				cout << "SAT "; break;
			case'G':
				cout << "SUN "; break;
			default:
				break;
			}
			flag = i;
			break;
		}
		
	}
	for (j = flag+1; j<str1.length()&&j<str2.length(); j++) {
		if (str1[j] == str2[j]) {
			if (str1[j] >= 'A'&&str1[j] <= 'N'){
				hour = str1[j] - 'A' + 10;
				cout << hour/10<<hour%10<<":";
				break;
			}
			else if (str1[j] >= '0'&&str1[j]<='9') {
				hour = str1[j] - '0';
				cout << hour/10<<hour%10<< ":";
				break;
			}
		}
	}
	for (j = 0; j < str3.size()&&j < str3.size(); j++) {
		if (str3[j] == str4[j] && (str3[j]>='a'&&str3[j] <='z') || (str3[j]<'Z'&&str3[j]>'A')) {
			minute=j;
			cout << minute/10<<minute%10 << endl;
			break;
		}
	}
}