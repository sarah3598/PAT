package com.pat.first;

import java.util.Scanner;

/**
 * PATBasicLevel1001
 * @author Administrator
 *
 */
public class Pat1001 {
	public static void main(String arg[]){
		Scanner sc=new Scanner(System.in);
		int num=sc.nextInt();
		sc.close();
		int count=0;
		while(num!=1){
			if(num%2!=0){
				num=num*3+1;
			}
			num=num/2;
			count++;
		}
		System.out.println(count);	
	}

}
