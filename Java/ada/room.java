
class rom
{
		int roomno;
		String roomtype;
		float roomarea;
		String machine;
		
}
class room
{
	public static void main(String args[])
	{
		 rom r = new rom();
			r.roomno=101;
			r.roomtype="VIP";
			r.roomarea=1278;
			r.machine="AC Machine";
			System.out.println("Information be like.....\n"+r.roomno+"\n"+r.roomtype+"\n"+r.roomarea+"\n"+r.machine);
	}
}
