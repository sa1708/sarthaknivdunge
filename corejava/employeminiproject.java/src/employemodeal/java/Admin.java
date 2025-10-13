package employemodeal.java;



public class Admin extends employe { // step1
    double allocing;

    public Admin() {
        super(); // step2
        this.allocing = 1223;
    }

    public Admin(int id, double salary, String name, double allocing) {
        super(id, salary, name);
        this.allocing = allocing;
    }

    public double getAllocing() {
        return allocing;
    }

    public void setAllocing(double allocing) { // fixed type
        this.allocing = allocing;
    }

    public void display() {
        super.display(); // step3
        System.out.println("Allocating: " + this.allocing);
    }
} // admin end here
