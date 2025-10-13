package mainview.java;


import java.util.*;

abstract class Account {
    protected int accNo;
    protected String holderName;
    protected double balance;

    public Account(int accNo, String holderName, double balance) {
        this.accNo = accNo;
        this.holderName = holderName;
        this.balance = balance;
    }

    public void deposit(double amount) {
        balance += amount;
        System.out.println("Deposited: " + amount + " | New Balance: " + balance);
    }

    public abstract void withdraw(double amount);
    public abstract void calculateInterest();
    
    public void showDetails() {
        System.out.println("Acc No: " + accNo + " | Holder: " + holderName + " | Balance: " + balance);
    }
}

// ---------------- Savings Account -----------------
class SavingsAccount extends Account {
    private static final double MIN_BALANCE = 10000;
    private static final double INTEREST_RATE = 0.04;

    public SavingsAccount(int accNo, String holderName, double balance) {
        super(accNo, holderName, balance);
    }

    @Override
    public void withdraw(double amount) {
        if (balance - amount >= MIN_BALANCE) {
            balance -= amount;
            System.out.println("Withdrawn: " + amount + " | New Balance: " + balance);
        } else {
            System.out.println("Cannot withdraw! Minimum balance requirement not met.");
        }
    }

    @Override
    public void calculateInterest() {
        double interest = balance * INTEREST_RATE;
        balance += interest;
        System.out.println("Interest Added: " + interest + " | New Balance: " + balance);
    }
}

// ---------------- Salary Account -----------------
class SalaryAccount extends SavingsAccount {
    private Date lastTransaction;

    public SalaryAccount(int accNo, String holderName, double balance) {
        super(accNo, holderName, balance);
        lastTransaction = new Date(); // account opened today
    }

    @Override
    public void deposit(double amount) {
        super.deposit(amount);
        lastTransaction = new Date();
    }

    @Override
    public void withdraw(double amount) {
        super.withdraw(amount);
        lastTransaction = new Date();
    }

    public void freezeCheck() {
        // (For demo, we won't check actual 2 months, just print logic)
        System.out.println("Checking if account needs to be frozen... (if > 2 months no txn)");
    }
}

// ---------------- Current Account -----------------
class CurrentAccount extends Account {
    private double overdraftLimit;

    public CurrentAccount(int accNo, String holderName, double balance, double overdraftLimit) {
        super(accNo, holderName, balance);
        this.overdraftLimit = overdraftLimit;
    }

    @Override
    public void withdraw(double amount) {
        if (balance + overdraftLimit >= amount) {
            balance -= amount;
            System.out.println("Withdrawn: " + amount + " | New Balance: " + balance);
        } else {
            System.out.println("Overdraft limit exceeded!");
        }
    }

    @Override
    public void calculateInterest() {
        System.out.println("No interest for Current Account.");
    }
}

// ---------------- Loan Account -----------------
class LoanAccount extends Account {
    private static final double INTEREST_RATE = 0.08;

    public LoanAccount(int accNo, String holderName, double loanAmount) {
        super(accNo, holderName, -loanAmount); // start with negative balance
    }

    @Override
    public void withdraw(double amount) {
        System.out.println("Withdrawals not allowed on Loan Account.");
    }

    @Override
    public void calculateInterest() {
        double interest = balance * INTEREST_RATE;
        balance += interest; // balance is negative, so interest increases loan
        System.out.println("Loan Interest Added: " + interest + " | Balance: " + balance);
    }

    public void repayLoan(double amount) {
        balance += amount;
        System.out.println("Loan Repayment: " + amount + " | New Balance: " + balance);
    }
}

// ---------------- Main Class -----------------
public class demo {
    public static void main(String[] args) {
        // Create accounts
        SavingsAccount sa = new SavingsAccount(101, "Arjun", 15000);
        SalaryAccount salAcc = new SalaryAccount(102, "Meera", 12000);
        CurrentAccount ca = new CurrentAccount(103, "Rahul", 5000, 10000);
        LoanAccount la = new LoanAccount(104, "Sita", 50000);

        // Demo Operations
        sa.deposit(2000);
        sa.withdraw(5000);
        sa.calculateInterest();

        salAcc.deposit(3000);
        salAcc.freezeCheck();

        ca.withdraw(12000);

        la.repayLoan(10000);
        la.calculateInterest();
    }
}

