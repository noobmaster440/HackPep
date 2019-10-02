import java.util.Arrays;
import java.util.Scanner;

class Sorting {
  public static Scanner sc = new Scanner(System.in);

  public static void main(String args[]) {
    int cases = sc.nextInt();
    for (int i = 0; i < cases; i++) {
      int size1 = sc.nextInt();
      if (size1 < 0)
        return;
      int[] arr1 = new int[size1];
      input(arr1);
      int size2 = sc.nextInt();
      if (size2 < 0)
        return;
      int[] arr2 = new int[size2];
      input(arr2);

      System.out.println(getKad(arr1));
      System.out.println(getKad(arr2));
    }
  }

  public static void input(int[] arr) {
    for (int i = 0; i < arr.length; i++) {
      arr[i] = sc.nextInt();
    }
  }

  public static int getSum(int[] arr, int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
      sum += arr[i];
    }
    return sum;
  }

  public static int getKad(int[] arr) {
    int curr_sum = arr[0], start = 0, end = 0;
    for (int i = 1; i < arr.length; i++) {
      if (arr[i] < curr_sum) {
        curr_sum += arr[i];
        end++;
      } else {
        curr_sum = arr[i];
        start = i;
        end = i;
      }
    }
    return getSum(arr, start, end);
  }
}