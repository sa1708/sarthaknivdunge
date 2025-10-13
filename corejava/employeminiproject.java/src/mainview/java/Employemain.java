package mainview.java;

import employedeo.java.employeDAO;
import employemodeal.java.hr;


public  class Employemain  {
    public static void main(String[] args) {
        employeDAO d1 = new employeDAO();

        if (d1.addEmploye(new hr(1, 7896, "yffyf", 6745)))
            System.out.println("Successfully added!");
        else
            System.out.println("Error while adding employee");
    }
}

