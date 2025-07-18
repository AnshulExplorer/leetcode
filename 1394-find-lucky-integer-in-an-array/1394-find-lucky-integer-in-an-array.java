class Solution {
    public int findLucky(int[] arr) {
       HashMap<Integer,Integer>mp=new HashMap<>();
       for(int x:arr){
            mp.put(x,mp.getOrDefault(x,0)+1);
       } 
       int ans=-1;
       for(Map.Entry<Integer,Integer>e:mp.entrySet()){
            int key=e.getKey();
            int val=e.getValue();
            if(key==val){
                ans=Math.max(ans,key);
            }
       }
       return ans;
    }
}