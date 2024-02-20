
import java.util.*;

class Number
{
    boolean Check(int Arr[], int iNo)
    {
        for(int i = 0; i<iNo ;i++)
        {
            if(Arr[i] == iNo)
            {
                return true;
            }
        }
        return false;
    }
}

class A35_Prog1
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

        System.out.println("Enter the Number to search : ");
        int nSerach = sobj.nextInt();

        
        Number nobj = new Number();
        boolean result = nobj.Check(Arr,nSerach);

    }

}
