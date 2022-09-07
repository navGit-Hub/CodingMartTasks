public class Main {

    public static int findCost(int arr[]){
        int dp[][] = new int[arr.length][arr.length];
        int q = 0;
        for(int l=2; l < arr.length; l++){
            for(int i=0; i < arr.length - l; i++){
                int j = i + l;
                dp[i][j] = 1000000;
                for(int k=i+1; k < j; k++){
                    q = dp[i][k] + dp[k][j] + arr[i]*arr[k]*arr[j];
                    if(q < dp[i][j]){
                        dp[i][j] = q;
                    }
                }
            }
        }
        return dp[0][arr.length-1];
    }
    
    public static void main(String args[]){
        
        int arr[] = {2,3,6,4,5};
        int cost = findCost(arr);
        System.out.print(cost);
    }
}

