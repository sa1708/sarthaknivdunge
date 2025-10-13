package employemodeal.java;

public class employe 
{
	int id;
	double salary;
	String name ;
	public void setid(int i)
	{
		this.id=i;
	}
	 public void setsalary(double s)
	{
		this.salary=s;
	}
	public void setname(String n)
	{
		this.name=n;
	}
	public int getid()
	{
		return this.id;
	}
	 public String getname()
	{
		return this.name;
	}
	public double getsalary()
	{
		return this.salary;
	}
	public employe()//default
	
	{
		this.id=21;
		this.salary=23243;
		this.name="sairaj";
	}
	 public employe(int i,double s,String n)//paramer
	{
		this.id=i;
		this.salary=s;
		this.name=n;
	}
	 public void display()
	{
		System.out.println(this.id);
		System.out.println(this.salary);
		System.out.println(this.name);
	}
			
}//class end 
