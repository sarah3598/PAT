/*��������2������PAT��APATA��AAPATAA���ַ�������ͨ����
����3�ǽ���������2�Ļ���֮�ϵģ����ʵ��ƣ�
PAT           -> PAAT                 -> PAAAT                      -> ...  �м�A����Ŀÿ�μ�1
APATA      -> APAATAA         -> APAAATAAA            -> ...  �м�A����Ŀÿ�μ�1���ұ�A����Ŀÿ�μ�1�����A����Ŀ��
AAPATAA -> AAPAATAAAA -> AAPAAATAAAAAA -> ...  �м�A����Ŀÿ�μ�1���ұ�A����Ŀÿ�μ�2�����A����Ŀ��
������ ������
���ۣ����A����Ŀ * �м�A����Ŀ = �ұ�A����Ŀ��*/
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int Judge(char ch[]){
	int i = 0; int tag = 1; int T_time = 0, P_time = 0;
	int A_time_front = 0, A_time_last = 0;
	int A_time_mid = 0;
	int A_time = 0;

	while (ch[i] != '\0'){
		if (ch[i] != 'A'&&ch[i] != 'P'&&ch[i] != 'T'){
			tag = 0;
			break;
		}//�ַ����б������P,A,T�����ַ� 
		else if (ch[i] == 'P'){
			P_time++;
			if (P_time != 1){
				tag = 0;
				break;
			}//��¼P�ĸ��� 
		}
		else if (ch[i] == 'T'){
			T_time++;
			if (P_time == 0 || T_time != 1){
				tag = 0;
				break;
			}
		} //T�ĸ��� 
		else if (ch[i] == 'A'){
			A_time++;
			if (P_time == 0){
				A_time_front++;
			}
			else if (P_time == 1 && T_time == 0){
				A_time_mid++;
			}
			else if (P_time == 1 && T_time == 1){
				A_time_last++;
			}
		}
		i++;
	}
	if (P_time == 0 || T_time == 0 || A_time == 0)
		tag = 0;
	else if (A_time_front != 0 && A_time_last != 0){
		if ((A_time_last / A_time_front) != (A_time_mid))
			tag = 0;
	}
	return tag;
}
int main(){
	int n, i = 0;
	char s[105];
	int result[15];
	scanf("%d", &n);
	for (; i<n; i++){
		scanf("%s", s);
		result[i] = Judge(s);
	}
	for (i = 0; i<n; i++){
		if (result[i])
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}