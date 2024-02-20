
import java.util.*;

class Number
{
    public int FirstOcc(int Arr[], int iNo)
    {
        for(int i = 0; i<iNo ;i++)
        {
            if(Arr[i] == iNo)
            {
                return i;
            }
        }
        return -1;
    }
}

class A35_Prog2
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
        int nSearch = sobj.nextInt();

        
        Number nobj = new Number();
        int result = nobj.FirstOcc(Arr,nSearch);

        if (result != -1)
        {
        System.out.println("First occrance is at index : "+result);
        }
        else
        {
            System.out.println("No. not found");
        }
    }

}
