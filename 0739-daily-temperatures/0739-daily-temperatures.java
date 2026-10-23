class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
        int n = temperatures.length;
        int [] arr = new int [n];

        Stack <Integer> stack = new Stack<>();

        stack.push(0);

        for(int i=1;i<n;i++){
            int currTemp = temperatures[i];
            while(!stack.isEmpty()){
                int idx = stack.peek();
                int tempTop = temperatures[idx];
                if(tempTop<currTemp){
                    arr[idx]=i-idx;
                    stack.pop();
                }else{
                    break;
                }
            }
            stack.push(i);
        }
        return arr;
    }
}