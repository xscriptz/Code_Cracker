import java.util.*;

public class Arraylisto
{

public static void main(String args[])
{
	ArrayList al = new ArrayList();
	al.add("A");
	al.add("B");
	al.add("C");
	al.add("D");
	System.out.println(al.size());
	System.out.println(al);
	al.remove("A");
	System.out.println(al);
}
}
