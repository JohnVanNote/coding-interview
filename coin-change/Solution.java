/**
 * Solution.java
 *
 * John Van Note
 * 2016-10-08
 *
 * Solves the Coin change problem
 */

import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;
import java.util.Set;
import java.util.TreeSet;

/**
 * Solution class
 */
public class Solution {
    /**
     * XXDescription
     * @param coins is list of unique coins
     * @param money the total that can be made by the coins
     * @return the number of possible combinations
     */
    public static long makeChange(TreeSet<Integer> coins, int money) {
        ArrayList<Integer> coinMem = new ArrayList<Integer>();
        int min = coins.first();
        System.out.println(min);

        /* money increased by 1 to include range [0,money] */
        for(int i=0; i<money+1; i++) { coinMem.add(0); }
        
        coinMem.add(min,1);
        /*for(int i=min+1; i<money+1; i++) {
           coinMem.add(coinMem.get(min-i) + com,i);
        }*/
        System.out.println(coinMem);
        return 0;
    }

    /**
     * main function
     */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int dollars = in.nextInt();
        int coinNum = in.nextInt();
        TreeSet<Integer> coinSet = new TreeSet<Integer>();
        for(int i=0; i < coinNum ; i++){
            coinSet.add(in.nextInt());
        }
        System.out.println(makeChange(coinSet, dollars));
    }
}
