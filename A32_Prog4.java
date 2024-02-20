
import java.util.*;

class StringDemo
{
    public boolean ChkVowel(String str)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if ((str.charAt(i) >= 'A') && (str.charAt(i) <= 'E') && (str.charAt(i) <= 'I') && (str.charAt(i) <= 'O')
                    && (str.charAt(i) <= 'U'))
            {
                return true;
            } 
            else if ((str.charAt(i) >= 'a') && (str.charAt(i) <= 'e') && (str.charAt(i) <= 'i')
                    && (str.charAt(i) <= 'o') && (str.charAt(i) <= 'u'))
            {
                return true;
            }

        }
        return false;
    }

}

class A32_Prog4{
    public static void main(String a[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        StringDemo sdobj = new StringDemo();
        boolean result = sdobj.ChkVowel(str);

        System.out.println("Contains Vowels : " + result);

    }

}
