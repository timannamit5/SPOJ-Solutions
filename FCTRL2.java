/*
    nerdyninja
    FCTRL2
    math, big integer
*/
import java.math.*;
import java.io.*;

class FCTRL2
{
    public static void main(String[] args)throws IOException
    {
        //I/P
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        
        int t;
        t = Integer.parseInt(in.readLine());
       
        //Delcare a big integer
        BigInteger fact;
        
        while(t-- != 0)
        {
            int n;
            n = Integer.parseInt(in.readLine());
            //Initialize factorial answer to 1
            fact = new BigInteger("1");

            for(int i = 2; i <= n; i++)
                fact = fact.multiply(new BigInteger(""+i));

            System.out.println(fact);
        }
    }
}