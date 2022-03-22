import java.util.Scanner;
public class CarSurvey{
	public static void main(String arg[]){
		int choice;
		int survey[][]=new int[4][4];
		Scanner sc=new Scanner(System.in);
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				survey[i][j]=0;
			}
		}
		int cityCode;
		int carCode;
		do	
		{
			System.out.println("-----Main Menu----");
			System.out.println("press [0] for Delhi");
			System.out.println("press [1] for Mumbai");
			System.out.println("press [2] for Chennai");
			System.out.println("press [3] for Kolkata");
			System.out.println("press [0] for K10");
			System.out.println("press [1] for ZenAstelo");
			System.out.println("press [2] for WagonR");
			System.out.println("press [3] for SX4");
			cityCode=sc.nextInt();
			System.out.println("Enter car code");
			carCode=sc.nextInt();
			survey[cityCode][carcode]++;
			System.out.println("do you want to continue? 1 for yes 0 for no");
			choice=sc.nextInt();
		}while(1);
		System.out.println(("\t        K-10\t        WagonR\t        \tSX-4        "));
		for(int i=0;i<4;i++)
		{
			if(i==0)
			System.out.print("Delhi");	
			if(i==1)
			System.out.print("Mumbai");
			if(i==2)
			System.out.print("Kolkata");
			if(i==3)
			System.out.print("Chennai");
			for(int j=0;j<4;j++)
			{
				System.out.print("	"+survey[i][j]+"\t");
			}
			System.out.println();	
		}
	}	

