class Account
{
	String name;
	int id;
	float amount;
	void insert(String name,int id, float amt)
	{
		id = id;
		name = name;
		amount = amt; 
	}
	void deposite(float amt)
	{
		amount = amount + amt ;
		System.out.println("\nYou depositeed ....."+amt);
	}
	void withdrewal(float amt)
	{
		if(amount<amt)
		{
			System.out.println("\nInsufficient  balence......");
		}
		else{
			amount = amount - amt;
			System.out.println("\nYou withdrew ....."+amt);
		}
		
	}
	void checkbalence()
	{
		System.out.println("\nYour balence is ......."+amount);
	}
	void display()
	{
		System.out.println("\n See information ......\n\n\n Name "+name +"  \nAcoount num ...\n"+
	id+" Acoount balence.....\n"+amount);
	}
}	
class S3
{
	public static void main(String args[]) 
	{
		 Account a1 = new  Account();
		a1.insert("Vednt",101,100000);
		a1.display();
		a1.checkbalence();
		a1.deposite(8000);
		a1.display();
		a1.withdrewal(75000);
		a1.display();
		a1.withdrewal(350);
		a1.checkbalence();
		a1.display();
	}
}