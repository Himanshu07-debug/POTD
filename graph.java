import java.util.ArrayList;
import java.util.Comparator;
import java.util.PriorityQueue;

public class graph {

    public int countPaths(int n, int[][] roads) {
     
        // vector<int> gr[n];
        ArrayList<int[]> []gr = new ArrayList[n];

        // intializing array lists
        for(int i = 0; i < n; i++){
            gr[i] = new ArrayList<>();
        }

        for(int[] x : roads){
            gr[x[0]].add(new int[]{x[1], x[2]});
            gr[x[1]].add(new int[]{x[0], x[2]});
        }

        int[] cnt = new int[n];
        long[] dist = new long[n];

        for(int i = 0; i < n; i++){
            dist[i] = Long.MAX_VALUE;
            cnt[i] = 1;
        }


        // Ror the case of Priority Queue :
        // Ascending : a -> a[0]
        // Descending : new PriorityQueue<>(Comparator.comparingInt(a -> a[0]).reversed());
        PriorityQueue<long[]> pq = new PriorityQueue<>(Comparator.comparingLong(a -> a[0]));
        pq.offer(new long[]{0, 0});

        int mod = 1000000007;

        while(!pq.isEmpty()){

            long[] x = pq.poll();
            int node = (int)x[1];
            long dst = x[0];

            for(int[] y : gr[node]){
                if(dist[y[0]] > dst + y[1]){
                    dist[y[0]] = dst + y[1];
                    pq.offer(new long[]{dist[y[0]], y[0]});
                    cnt[y[0]] = cnt[node];
                }
                else if(dist[y[0]] == dst + y[1]){
                    cnt[y[0]] = (cnt[y[0]] + cnt[node])%mod;
                }
            }

        }

        return cnt[n - 1];

    }
    
}
