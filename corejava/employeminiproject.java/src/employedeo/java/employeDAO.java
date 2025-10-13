package employedeo.java;

import java.util.ArrayList;

import employemodeal.java.Admin;
import employemodeal.java.employe;
import employemodeal.java.hr;
import employemodeal.java.salesemanager;

;

public class employeDAO {

	 static ArrayList<employe> emparr = new ArrayList<employe>();
    

   static {
    
        emparr.add( new hr(101, 50000, "Sarthak", 1500));
        emparr.add(new hr(102, 55000, "Arpit", 2000));
        emparr.add(new hr(103, 60000, "Rohit", 2500));

        emparr.add(new salesemanager(201, 50000, "Sarthak", 1500, 4564));
        emparr.add(new salesemanager(202, 55000, "Arpit", 2000, 456));
        emparr.add(new salesemanager(203, 60000, "Rohit", 2500, 345));
        
        emparr.add(new Admin(301,  500530, "Sarthak", 15300));
        emparr.add(new Admin(302, 55340, "Arpit", 20050));
        emparr.add(new Admin(303, 65400, "Rohit", 25050));

     
    
   }
   
    public void addEmploye(employe e) {
    	emparr.add(e);
        }
    
    public void displaybyall(){
    	for(int i=0;i<emparr.size();i++) {
    		emparr.get(i);
    		
    	}
    }
     public int  getIndexById(int id){
    	 for(int i=0;i<emparr.size();i++) {
     		if(emparr.get(i).getid()==id) {
     			return i;
     		}
 		
     	}
		 return-1;
    	 	 
     }
     public int   getIndexByName(String name){
    	 for(int i=0;i<emparr.size();i++) {
     		if(emparr.get(i).getname().equalsIgnoreCase(name)) {
     			return i;
     		}
 		
     	}
		 return-1; 	 
     }
     public double   getSalaryById(int  id  ){
    	int index= getIndexById(id);
    	if (index!=-1)
    	{
    	return emparr.get(index).getsalary();	
     		}
 		
     	
		 return-1; 	 
     }
     public double   getnameById(int  id  ){
     	int index= getIndexById(id);
     	if (index!=-1)
     	{
     	return emparr.get(index).getsalary();	
      		}
  		
      	
 		 return-1; 	 
      }
     public void detailsEmploye(int id ) {
    	 int index= getIndexById(id);
    	 		
    	 if(index!=-1)
    		 emparr.remove(index);
     }
     public void sortBySalaryLowHight() {
    	 for(int i=0;i<emparr.size();i++) {
    		 
    		 for(int j=0;j<emparr.size()-1-i;j++) {
    			 if(emparr.get(j).getsalary()<emparr.get(j+1).getsalary())
    			 {
    				 employe temp= emparr.get(j);
    				 emparr.set(j, emparr.get(j+1));
    				 emparr.set(j+1, temp);
    			 }
    			 
    		 }
    	 }
     }
}
