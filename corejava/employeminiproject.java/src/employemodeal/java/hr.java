package employemodeal.java;


public class hr extends employe {
		double commision;
	
		public	hr(int id ,double salary,String name ,double commision) {
			super(id ,salary,name);
			this.commision = commision;
		}

		public hr() {
			super();
			this.commision=342;
		}

		public double getCommision() {
			return commision;
		}

		public void setCommision(double commision) {
			this.commision = commision;
		}
		public void display()
		{
			
			super.display();
			System.out.println("this is "+this.commision);
		}
		
	}//hr end here 
