package CIE;

import java.util.*; 

 class student
{
	String name;
	
	int sem;
	Scanner s1 = new Scanner(System.in);
	public student()
	{
		name = " ";
		
        sem = 0;
	}
    public void input(int i)
    {
        System.out.println("Enter the name of the student " + i);
        name = s1.next();
        System.out.println("Enter the semester ");
        sem = s1.nextInt();

    }

	
	
}

public class internals extends student
{	
	double marks[];
    Scanner s1 = new Scanner(System.in);
    System.out.println("Enter the marks of 5 subjects out of 50 ");
    for(int i=0;i<5;i++)
    {
        System.out.println("Enter the marks of subject " + (i+1) + " : ");
        marks[i] = s1.nextDouble();
    }
}

