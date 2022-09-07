import java.util.Scanner;
import java.util.Stack;
public class Main{
    public static void main(String args[]) {
        int a;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        int arr[] = new int[a];
        for (int i = 0; i < a; i++) {
            arr[i] = sc.nextInt();
        }
        int res=largestRectangleArea(arr);
        System.out.println(res);
    }
    static int largestRectangleArea(int[] a) {
        Stack<Integer> s = new Stack<>();
        int cols = a.length;
        int max = 0;
        int i = 0;
        int top_val = 0, area = 0;
        while (i < cols) {
            if (s.empty() || a[s.peek()] <= a[i]) {
                s.push(i++);
            } else {
                top_val = a[s.peek()];
                s.pop();
                area = top_val * i;
                if (!s.empty()) {
                    area = top_val * (i - s.peek() - 1);
                }
                max = Math.max(area, max);
            }
        }
        while (!s.empty()) {
            top_val = a[s.peek()];
            s.pop();
            area = top_val * i;
            if (!s.empty()) {
                area = top_val * (i - s.peek() - 1);
            }
            max = Math.max(area, max);
        }
        return max;
    }
}