package fourth_week;

import java.util.Scanner;

public class fn2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n;
		double sum=0;
		Scanner in=new Scanner(System.in);
		n=in.nextInt();
		for(int i=1;i<=n;i++)
		{
			if(i%2==0)
				sum=sum-1.0/i;
			else
				sum=sum+1.0/i;
		}
		System.out.printf("%.2f",sum);
	}
	
}
