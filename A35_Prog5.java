
import java.util.*;

class Number
{
    public int Product(int Arr[])
    {
        int iCnt = 0;
        int iPro = 1;

        for(int i = 0; i<Arr.length;i++)
        {
            if( (Arr[i] % 2) != 0) 
            {
               iPro = iPro * Arr[i];
            }
        }
        return iPro;
    }
}

class A35_Prog5
{
    public static void main(String a[]) 
    {
        int iRet = 0;
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

        Number nobj = new Number();
        int result = nobj.Product(Arr);

        System.out.println("Product of Odd numbers is : "+result);

    }

}
