// Last updated: 8/4/2026, 12:34:56 PM
import java.util.*;

class Solution {
    public int minimumPairRemoval(int[] arr) {
        LinkedList<Integer> a = new LinkedList<>();
        for (int x : arr) a.add(x);

        int step = 0;

        while (!ok(a)) {
            int m = Integer.MAX_VALUE, p = -1;

            ListIterator<Integer> it = a.listIterator();
            int prev = it.next(), i = 0;

            while (it.hasNext()) {
                int cur = it.next(), s = prev + cur;
                if (s < m) {
                    m = s;
                    p = i;
                }
                prev = cur;
                i++;
            }

            ListIterator<Integer> it2 = a.listIterator();
            for (int j = 0; j < p; j++) it2.next();

            int x = it2.next();
            int y = it2.next();
            it2.set(x + y);
            it2.previous();
            it2.previous();
            it2.remove();

            step++;
    }
        return step;
    }

    private boolean ok(LinkedList<Integer> a) {
        Iterator<Integer> it = a.iterator();
        int prev = it.next();
        while (it.hasNext()) {
            int cur = it.next();
            if (cur < prev) return false;
            prev = cur;
        }
        return true;
    }
}