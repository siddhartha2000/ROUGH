import CIE.student;
import CIE.internals;
import SEE.external;
import java.util.*; 
class finalmain
{
    public static void main(String argX[])
    {
        Scanner s1 = new Scanner(System.in);
        System.out.println("Enter the number of students ");
        int n = s1.nextInt();
        external s[] = new externals[n];
        
        for(int i=0;i<n;i++)
        {
            s[i] = new external();
            s[i].input(i);
            s[i].finalmarks[i] = s[i].marks[i] + (s[i].markss[i]/2);

        }
        System.out.println("The final marks of students are ");
        for(int i=0;i<n;i++)
        {
            System.out.println("The final marks of student " + (i+1) + " in 5 subjects are ");
            System.out.println("The final marks of subject " + (i+1) + " is : " + s[i].finalmarks[i]);
            
            

        }
    }
}


