package employemodeal.java;



public class salesemanager  extends employe {

		double insetive;
		int target;
		
		public salesemanager() {
			super();
			this.insetive=123;
			this.target=12;
			
		}

		public	salesemanager(int id ,double salary,String name,double insetive, int target) {
			super(id  ,salary,name);
			this.insetive = insetive;
			this.target = target;
		}

		public double getInsetive() {
			return insetive;
		}

		public void setInsetive(double insetive) {
			this.insetive = insetive;
		}

		public int getTarget() {
			return target;
		}

		public void setTarget(int target) {
			this.target = target;
		}
		public void display()
		{
			super.display();
			System.out.println("this is target"+this.target);
			System.out.println("thid is insu=entive "+this.insetive);
		}
	
}


