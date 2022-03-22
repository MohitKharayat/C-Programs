class Lab{
	public static void main(String arg[]){
		int marks[][][]={
											{{20,30,40},{12,23,43,}},
											{{34,45,55},{23,45,65}},
											{{56,78,98},{13,45,55,}}
										};
		for(int i=0;i<3;i++){
			if (i==0)
				System.out.print(("civil"));
			if (i==1)
				System.out.print(("cse"));
			else
				System.out.print(("electrical"));
				
			for(int j=0;j<2;j++){
				if (j==0)
					System.out.print(("marks of amit"));
				if (j==1)
					System.out.print(("marks of sumit"));
				else
					System.out.print(("marks of rumit"));
					
				for(int k=0;k<3;k++){
					System.out.print(marks[i][j][k]);
				}
				System.out.println();
			}
			System.out.println();
		}
	}
}	
										
									
