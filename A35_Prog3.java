
import java.util.*;

class Number
{
    public int LastOcc(int Arr[], int iNo)
    {
        int iLast = -1;

        for(int i = Arr.length -1; i>0 ;i--)
        {
            if(Arr[i] == iNo)
            {
                iLast = i;
                break;
            }
        }
        return iLast;
    }
}

class A35_Prog3
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
        int result = nobj.LastOcc(Arr,nSearch);

        if (result != -1)
        {
        System.out.println("Last occrance is at index : "+result);
        }
        else
        {
            System.out.println("No. not found");
        }
    }

}
