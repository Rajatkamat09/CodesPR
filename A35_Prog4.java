
import java.util.*;

class Number
{
    public void Display(int Arr[], int iStart, int iEnd)
    {

        for(int i = 0; i<Arr.length;i++)
        {
            if(( (Arr[i] ) >= iStart) && ((Arr[i]) <=iEnd))
            {
               System.out.printf("%d\t", Arr[i]);
            }
        }
        System.out.println("   ");
    }
}

class A35_Prog4
{
    public static void main(String a[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Size of the Array : ");
        int  iNO = sobj.nextInt();

        // Creating an array to store elements.
        int Arr[] = new int [iNO];

        System.out.println("Enter the Elements: ");

        for(int i = 0 ; i < iNO ; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Enter the Numbers of Start and End range : ");
        int nStart = sobj.nextInt();
        int nEnd = sobj.nextInt();

        
        Number nobj = new Number();
        nobj.Display(Arr , nStart , nEnd);

    }

}
