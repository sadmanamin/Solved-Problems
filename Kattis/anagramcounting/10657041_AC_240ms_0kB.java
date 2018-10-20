import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;
class Main
{
	public static void main (String[] args)
	{
		Scanner sc = new Scanner(System.in);
		while(sc.hasNextLine()){
			String str = sc.nextLine();
			char arr[] = str.toCharArray();
			int arr2[]= new int[53];
			for(int i=0;i<arr.length;i++){
				int x;
				if(arr[i]>='a'&&arr[i]<='z')x=arr[i]-'a';
				else x=arr[i]-'A'+26;
				arr2[x]++;
			}
			BigInteger a = new BigInteger(factorial(arr.length));
			
			for(int i=0;i<arr2.length;i++){
				BigInteger b= new BigInteger(factorial(arr2[i]));
				if(arr2[i]!=0&&arr2[i]!=1) a = a.divide(b);
			}
			System.out.println(a);
		}
	}
	
	public static String factorial(int n) {
	 	if(n==0)return "1";
	 	if(n==1)return "1";
       BigInteger fact = new BigInteger("1");
       for (int i = 1; i <= n; i++) {
           fact = fact.multiply(new BigInteger(i + ""));
       }
       return fact.toString();
   }
}