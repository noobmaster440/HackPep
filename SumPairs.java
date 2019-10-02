import java.util.Scanner;
import java.util.Arrays;

class Solution {
  public static Scanner sc = new Scanner(System.in);

  public static void main(String args[]) {
    int size = sc.nextInt();
    int[] arr = new int[size];
    input(arr);
    Arrays.sort(arr);
    int target = sc.nextInt();
    printPairs(arr, target);
  }

  public static void input(int[] arr) {
    for (int i = 0; i < arr.length; i++) {
      arr[i] = sc.nextInt();
    }
  }

  public static void printPairs(int[] arr, int target) {
    int si = 0, ei = arr.length - 1;

    while (si < ei && ei < arr.length) {
      int c_sum = arr[ei] + arr[si];
      if (c_sum == target) {
        System.out.println(arr[si] + " and " + arr[ei]);
      }
      if (c_sum > target) {
        ei--;
      } else if (c_sum < target) {
        si++;
      } else {
        si++;
        ei++;
      }
    }
  }
}