/*根据条件2，形如PAT、APATA、AAPATAA的字符串可以通过；
条件3是建立在条件2的基础之上的，动笔递推：
PAT           -> PAAT                 -> PAAAT                      -> ...  中间A的数目每次加1
APATA      -> APAATAA         -> APAAATAAA            -> ...  中间A的数目每次加1，右边A的数目每次加1（左边A的数目）
AAPATAA -> AAPAATAAAA -> AAPAAATAAAAAA -> ...  中间A的数目每次加1，右边A的数目每次加2（左边A的数目）
··· ···
结论：左边A的数目 * 中间A的数目 = 右边A的数目。*/
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
		}//字符串中必须仅有P,A,T三种字符 
		else if (ch[i] == 'P'){
			P_time++;
			if (P_time != 1){
				tag = 0;
				break;
			}//记录P的个数 
		}
		else if (ch[i] == 'T'){
			T_time++;
			if (P_time == 0 || T_time != 1){
				tag = 0;
				break;
			}
		} //T的个数 
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