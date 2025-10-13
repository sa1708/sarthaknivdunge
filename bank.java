package Accounttype;
import java.util.Calendar;
import java.util.Date;
import java.util.Scanner;

 abstract class Account {
    protected String accountNumber;
    protected String holderName;
    protected double balance;

     public String getAccountNumber() {
		return accountNumber;
	}

	public void setAccountNumber(String accountNumber) {
		this.accountNumber = accountNumber;
	}

	public String getHolderName() {
		return holderName;
	}

	public void setHolderName(String holderName) {
		this.holderName = holderName;
	}

	public double getBalance() {
		return balance;
	}

	public void setBalance(double balance) {
		this.balance = balance;
	}

	 Account(String accountNumber, String holderName, double balance) {
        this.accountNumber = accountNumber;
        this.holderName = holderName;
        this.balance = balance;
    }

  void deposit(double amount) {
        balance += amount;
        System.out.println(amount + " deposited successfully");
    }

   void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            System.out.println(amount + " withdrawn successfully");
        } else {
            System.out.println("Insufficient balance");
        }
    }

  
  abstract void calculateInterest();

     void showDetails() {
        System.out.println("\nAccount Number: " + accountNumber);
        System.out.println("Holder Name: " + holderName);
        System.out.println("Balance: " + balance);
    }
}
//-------saving account-----------
 class SavingsAccount extends Account {
     static  double minbalance = 10000;
     static double interstrate = 0.04;

   SavingsAccount(String accountNumber, String holderName, double balance) {
        super(accountNumber, holderName, balance);
    }

    @Override
void deposit(double amount) {
	super.deposit(amount);
}

   @Override
   void withdraw(double amount) {
	 if(amount >= minbalance )
	 {
		 balance -= amount ;
		 System.out.println("withdrow "+amount );
	 }
	 else {
		 System.out.println("insafishant balance ");
	 }
	
   }

	@Override
   void calculateInterest() {
        if (balance >= minbalance) {
            double interest = balance * interstrate;
            balance += interest;
            System.out.println("Interest of " + interest + " added to savings account");
        } else {
            System.out.println("Balance below minimum. No interest added");
        }
    }
}
 //------------salary account-------
 class SalaryAccount extends SavingsAccount {
	     Date lastTransactionDate;
	     boolean frozen = false;

	    public SalaryAccount( String  accNo, String name, double balance) {
	        super(accNo, name, balance);
	        this.lastTransactionDate = new Date();
	    }

	    @Override
	    public void deposit(double amount) {
	        super.deposit(amount);
	        lastTransactionDate = new Date();
	    }
	    public void checkInactivity() {
	        Calendar cal = Calendar.getInstance();
	        cal.add(Calendar.MONTH, -2);
	        if (lastTransactionDate.before(cal.getTime())) {
	            frozen = true;
	            System.out.println(" Salary Account frozen no trnasation in   last 2 months");
	        }
	    }
	    @Override
	    public void withdraw(double amount) {
	        if (!frozen) {
	            super.withdraw(amount);
	            lastTransactionDate = new Date();
	        } else {
	            System.out.println("⚠️ Account is frozen No transactions allowed.");
	        }
	    }

		public void nextMonth(boolean b) {
		
			
		}

	   
	}
 //-----------current account ---------
 class CurrentAccount extends Account {
    double overdraftLimit;

     CurrentAccount(String accountNumber, String holderName, double balance, double overdraftLimit) {
        super(accountNumber, holderName, balance);
        this.overdraftLimit = overdraftLimit;
    }

    @Override
 void withdraw(double amount) {
        if (balance + overdraftLimit >= amount) {
            balance -= amount;
            System.out.println(amount + " withdrawn successfully using overdraft");
        } else {
            System.out.println("Overdraft limit exceeded!");
        }
    }

    @Override
	void deposit(double amount) {
		super.deposit(amount);
	}

	@Override
     void calculateInterest() {
        System.out.println("Current Account has no interest.");
    }
}
 //---------loan account ---------
 class LoanAccount extends Account {
     static  double interrate  = 0.10;

   LoanAccount(String accountNumber, String holderName, double loanAmount) {
        super(accountNumber, holderName, -loanAmount); // Negative balance represents loan
    }

    @Override
    void calculateInterest() {
        double interest = Math.abs(balance) * interrate;
        balance -= interest;
        System.out.println("Loan interest of " + interest + " added to your balance.");
    }

    @Override
     void deposit(double amount) {
        balance += amount;
        System.out.println("Loan repayment of " + amount + " done successfully!");
    }
}//class end here 


public class bank {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Sample accounts
        SavingsAccount savings = new SavingsAccount("S101", "Arpit", 15000);
        SalaryAccount salary = new SalaryAccount("SL201", "Sarthak", 18000);
        CurrentAccount current = new CurrentAccount("C301", "Riya", 5000, 10000);
        LoanAccount loan = new LoanAccount("L401", "Amit", 50000);

        int choice;
        do {
            System.out.println("\n------ XYZ BANK AUTOMATION SYSTEM-------");
            System.out.println("1. Over the Counter Activities");
            System.out.println("2. Account Lifecycle");
            System.out.println("3. Interest Calculation");
            System.out.println("4. End of Day Report");
            System.out.println("5. Exit");
            System.out.print("Enter your choice: ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    System.out.println("\n--- Over the Counter Activities ---");
                    savings.deposit(2000);
                    current.withdraw(7000);
                    break;

                case 2:
                    System.out.println("\n--- Account Lifecycle ---");
                    savings.showDetails();
                     salary.nextMonth(false); // No transaction this month
                    break;

                case 3:
                    System.out.println("\n--- Interest Calculation ---");
                    savings.calculateInterest();
                    loan.calculateInterest();
                    break;

                case 4:
                    System.out.println("\n--- End of Day Report ---");
                    System.out.println("Savings Balance: " + savings.getBalance());
                    System.out.println("Salary Balance: " + salary.getBalance());
                    System.out.println("Current Balance: " + current.getBalance());
                    System.out.println("Loan Balance: " + loan.getBalance());
                    break;

                case 5:
                    System.out.println("Thank you for using XYZ Bank System!");
                    break;

                default:
                    System.out.println("Invalid choice!");
            }

        } while (choice != 5);
        
    }
}



