package Accounttype;

import java.util.Date;

public abstract class account {
 int accountno;
double balance;
String holdername;

public int getAccountno() {
	return accountno;
}
public void setAccountno(int accountno) {
	this.accountno = accountno;
}
public double getBalance() {
	return balance;
}
public void setBalance(double balance) {
	this.balance = balance;
}
public String getHoldername() {
	return holdername;
}
public void setHoldername(String holdername) {
	this.holdername = holdername;
}
public account(int accountno, double balance, String holdername) {
	super();
	this.accountno = accountno;
	this.balance = balance;
	this.holdername = holdername;
}
public account() {
	super();
	this.accountno=123431234;
	this.balance=3000;
	this.holdername="sarthak";
 }
 public void deposite(double amount ) {
	if (balance > 0 ) {
		balance+=amount;
		System.out.println("deposited:"+amount +"new balance "+balance);
	}
}

   public  void withdrow(double amount ) {
	   if(balance>= amount ) {
		   balance -= amount;
		   System.out.println("withdrow"+amount);
	   }
	   else {
		   System.out.println("insuffishant balance");
		   
	   }
   }
  public abstract double calculateinterate();
 public void  showBalance() {
	 System.out.println("accountno"+accountno +"balance"+balance);
 }
}//class end 

//----------saving account---------

class saving extends account{
	 static double minBalance =10000;

	public double getMinBalance() {
		return minBalance;
	}

	public void setMinBalance(double minBalance) {
			this.minBalance = minBalance;
	}

	@Override
	public void deposite(double amount) {
		super.deposite(amount);
	}
	
	@Override
	public void withdrow (double amount) {
		if(balance -amount <minBalance ) {
			
			System.out.println("withdrow "+amount );
		}
		else {
		super.withdrow(amount);
		}
		
	}
	@Override
	 public double calculateinterate() {
	double 	interate = balance *0.4;
		System.out.println("interate is "+interate);
		return 0;
	}
}//class saving ends here 
//------------salary account---------
class salary extends account {
  
	private Date lasttransationDate;
	private boolean frozen = false;
	
	 
	
	 public salary(int accountno, double balance, String holdername, int frozan) {
		super(accountno, balance, holdername);
		this.lasttransationDate=new Date();
	 }
	 @Override
	public  void deposite(double amount) {	
		super.deposite(amount);
		lasttransationDate =new Date();
	 }
	 @Override
	 public void withdrow(double amount) {
		if(!frozen ) {
			super.withdrow(amount);
			lasttransationDate = new Date();
			
		}
		else {
			System.out.println("your Account is frozed");
		}
		
	 }
	 
	  
	 
	 //--------current account ------
	 class currentaccount extends account
	 {

		@Override
		
		public double calculateinterate() {
			
			return 0;
		}
		 
	 }



	 @Override
	 public double calculateinterate() {
		// TODO Auto-generated method stub
		return 0;
	 }
	
}//class end here 

 class test{
	public static void main(String[] args ) {
		saving a1 = new saving();
		a1.withdrow(5000);
		
				
	}
}
