/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
        ArrayList<Integer>arrL=new ArrayList<>();
        ListNode curr = head;
        while(curr!=null){
            arrL.add(curr.val);
            curr=curr.next;
        }
        int n = arrL.size();
        int left=0;
        int right=n-1;
        while(left<right){
            if(arrL.get(left)==arrL.get(right)){
                left++;
                right--;
            }else{
                return false;
            }
        }
        return true;
    }
}