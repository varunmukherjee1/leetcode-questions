import java.util.Arrays;
import java.util.PriorityQueue;

public class code {
    class Solution {
        public int maxPerformance(int n, int[] speed, int[] efficiency, int k) {

            int[][] engineers = new int[n][2];

            for(int i = 0 ;i  < n ; i++){
                engineers[i][0] = speed[i];
                engineers[i][1] = efficiency[i];
            }

            Arrays.sort(engineers, (p1, p2) -> (p2[1] - p1[1]));

            PriorityQueue<Integer> pq = new PriorityQueue<>();

            long totalSpeed = 0 , ans = 0;

            for( int i = 0 ; i < n ; i++){
                if(pq.size() >= k){

                    totalSpeed -= pq.remove();
                }

                pq.add(engineers[i][0]);
                totalSpeed += engineers[i][0];

                ans = Math.max(ans , totalSpeed*engineers[i][1]);
            }

            return (int)(ans%1000000007);
        }
    }

    public static void main(String[] args) {

        PriorityQueue<Integer> pq = new PriorityQueue<>();

        pq.add(3);
        pq.add(2);
        pq.add(7);
        pq.add(1);
        pq.add(5);
        pq.add(6);
        pq.add(4);

        System.out.println(pq);
    }
}