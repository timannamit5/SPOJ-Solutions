/*
    nerdyninja
    BISHOPS
    math, big integer
*/
import java.math.*;
import java.util.*;
import java.io.*;

class BISHOPS
{
    public static void main(String[] args)throws IOException
    {
        // Input
        Scanner sc = new Scanner(System.in);
        while(sc.hasNextBigInteger()){
            BigInteger n = sc.nextBigInteger();
            BigInteger ans = n;
            if (ans.compareTo(BigInteger.ONE) > 0) {
                ans = n.multiply(new BigInteger("2"));
                ans = ans.subtract(new BigInteger("2"));
            }
            System.out.println(ans);
        }
    }
}