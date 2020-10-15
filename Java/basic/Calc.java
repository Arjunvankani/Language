class Calc
{
	public int add(int ... n) //Tack as array 
	{
		int s = 0;
		for(int i : n)
		{
			s = s+i;

		}
		return s;
			
	}

	public static void main(String args[])
	{
		Calc obj = new Calc();
		System.out.println(obj.add(1,2,3,4,5));
	}
}