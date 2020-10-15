import java.util.*;

		enum days {  
  SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY  
}
class ArList{
	public static void main(String args[])
	{
		ArrayList<String> list = new ArrayList<String>();
		list.add("Ved");
		list.add("Arjun");
		list.add("Yash");
		
		LinkedList<String> al=new LinkedList<String>();
		al.add("Ravi");
		al.add("Ajay");
		al.add("Jaylee");
		
		Vector<String> v=new Vector<String>(); 
		v.add("khushu");
		v.add("Dattu");
		v.add("Chottu");
		
		Stack<String> stack = new Stack<String>();
		stack.push("Data Science");
		stack.push("AI");
		stack.push("ML");
		stack.push("");
		stack.pop();
		
		PriorityQueue<String> queue=new PriorityQueue<String>();  
		queue.add("C++");
		queue.add("Java");
		queue.add("Python");
		queue.add("Android");
		 
		Deque<String> deque = new ArrayDeque<String>();  
		deque.add("Interface");
		deque.add("Constructor");
		deque.add("Overridding");
		
		HashSet<String> set=new HashSet<String>();  
		set.add("1");
		set.add("2");
		set.add("3");
		
		LinkedHashSet<String> set1=new LinkedHashSet<String>();  
		set1.add("A");
		set1.add("B");
		set1.add("C");
		
		TreeSet<String> set2=new TreeSet<String>(); 
		set2.add("!");
		set2.add("?");
		set2.add("&");
		
	/*	Map map=new HashMap();  
		map.put(1,"a");
		map.put(3,"c");
		map.put(6,"g");
		map.put(5,"e");
		map.put(2,"b");
		map.put(4,"d");
		*/
		

		
		Iterator itr = list.iterator();
		Iterator<String> itr1=al.iterator();
		Iterator<String> itr2=v.iterator();
		Iterator<String> itr3=stack.iterator();
		Iterator itr4=queue.iterator();
		//Itr5 is Queque   Removing element ...below 
		Iterator<String> itr6=set.iterator(); 
		Iterator<String> itr7=set1.iterator(); 
		Iterator<String> itr8=set2.iterator(); 
		/*maping
		Set set3=map.entrySet();	
		Iterator itr9=set3.iterator(); 
		*/
		//ENUM datatype
		Set<days> set3 = EnumSet.allOf(days.class); 
		Set<days> set4 = EnumSet.noneOf(days.class);  

		
		System.out.println("--------Array List ----\n");
		System.out.println(list);
		while(itr.hasNext()){
			System.out.println(itr.next());
		}
		
		System.out.println("--------Linked  List ----\n");
		System.out.println(al);
		while(itr1.hasNext()){
			System.out.println(itr1.next());
		}
		
		System.out.println("--------Vector   ----\n");
		System.out.println(v);
		while(itr2.hasNext()){
			System.out.println(itr2.next());
		}
		
		System.out.println("--------Stack  ----\n");
		System.out.println(stack);
		System.out.println("Head:"+queue.element());  
		System.out.println("Head:"+queue.peek()+"\n"); 
		while(itr3.hasNext()){
			System.out.println(itr3.next());
		}
		
		System.out.println("--------Prioriy Queue List ----\n");
		System.out.println(queue);
		System.out.println("\n------- All Element  .....");
		while(itr4.hasNext()){
			System.out.println(itr4.next());
		}
		
		queue.remove(); 
		queue.poll();  
		System.out.println(" -------Removing Two Element  .....");
		System.out.println(queue);
		Iterator<String> itr5=queue.iterator();  	
			while(itr5.hasNext())
			{  
				System.out.println(itr5.next());  
			}	
			
		System.out.println("------Array Deque ------\n");
		System.out.println(deque);
		for (String str : deque)
			{  
				System.out.println(str);  
			}  
			
		System.out.println("--------Hash Set List ----\n");
		System.out.println(set);
		while(itr6.hasNext()){
			System.out.println(itr6.next());
		}	
		
		System.out.println("-------- Linked Hash Set List ----\n");
		System.out.println(set1);
		while(itr7.hasNext()){
			System.out.println(itr7.next());
		}
		
		System.out.println("-------- Tree Set List ----\n");
		System.out.println(set2);
		while(itr8.hasNext()){
			System.out.println(itr8.next());
		}
		
/*      System.out.println("----Mapping -----\n");
		System.out.println(set3);
		while(itr9.hasNext()){  
        //Converting to Map.Entry so that we can get key and value separately  
        Map.Entry entry=(Map.Entry)itr9.next();  
        System.out.println(entry.getKey()+" "+entry.getValue());  
		}
*/    
		System.out.println("Enum data type ....\n");
		 System.out.println("Week Days:"+set3); 
		 System.out.println("Week Days:"+set4);    
	
	}
}