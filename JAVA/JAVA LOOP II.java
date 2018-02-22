import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        int mul=0;int j;
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            for(j=0,mul=a;j<n;j++){
              a += b;
              System.out.print(a + " "); b *= 2; 
            } System.out.println();
              
        }
        in.close();
    }
}
