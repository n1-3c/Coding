/* I have learnt this method while solving a problem on strings in CodeChef. The question name was Swap & Unite. The question goes like this...

You have a string S consisting of lowercase letters.
You can perform the following operation on S:
Choose two indices i and j (1 ≤ i < j ≤ |S|), and swap Si and Sj.
For example, if S = codechef, choosing i = 3 and j = 6 results in the string cohecdef.
You've always liked unity. To this end, find the minimum number of operations required so that for at least one character that appears in S, 
all its occurrences form a contiguous segment in S — in short, are united.
For example, if S = baaba, swapping the first and third characters results in S = aabba.
All the occurrences of 'b' form a contiguous segment now. Note that the 'a's don't form a contiguous segment, which is fine.

*/

for(int i = 0; i < 26; i++) {
        if(cnt[i] > 0) {
            ll sz = cnt[i], count = 0;
            
            for(int j = 0; j < sz; j++) {
                count += (s[j] == i + 'a');
            }
            
            ans = min(ans, sz - count);
            
            for(int j = sz; j < n; j++) {
                count += (s[j] == i + 'a');
                count -= (s[j - sz] == i + 'a');
                ans = min(ans, sz - count);
                      
            }
        }
    }
          
/* 

Sliding window goes like this, after the size of the window is specified in the line 17-19, 
then left most and right most pointer both are increased in order to slide the window, 
the explanation is here we check if the right most has the specific value, if it does then count is increased,
and it is removed for the left most one. Thus we can find the count of the character in the particular window.
That step wise sliding happens till the array or string is over.

*/     
