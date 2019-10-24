package SEE;
import CIE.*;
import java.util.*;

public class externals extends internals
{
    double markss[];
    double finalmarks[];
    Scanner s1 = new Scanner(System.in);
    System.out.println("Enter the marks of 5 subjects out of 100");
    for(int i=0;i<5;i++)
    {
        System.out.println("Enter the marks of subject " + (i+1) + " : ");
        markss[i] = s1.nextDouble();
}
