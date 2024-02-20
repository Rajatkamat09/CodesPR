import java.util.*;

class Digit {
    public int CountRange(int iNO) {
        int iDigit = 0;
        while (iNO != 0) {
            int lastDigit = iNO % 10;
            if ((lastDigit % 3 == 0) && (lastDigit % 7 == 0)) {
                iDigit++;
            }
            iNO = iNO / 10;
        }
        return iDigit;
    }
}

class A34 {
    public static void main(String a[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iNO = sobj.nextInt();

        Digit dobj = new Digit();
        int countRange = dobj.CountRange(iNO);

        System.out.println("Number of digits in the range of 3 and 7 are : " + countRange);
    }
}