import java.util.Arrays;
import java.util.Scanner;

class TripletSum {
  public static Scanner sc = new Scanner(System.in);

  public static void main(String args[]) {
    int size = sc.nextInt();
    if (size < 0)
      return;
    int[] arr = new int[size];
    input(arr);
    int target = sc.nextInt();
    Arrays.sort(arr);
    PT(arr, target);

  }

  public static void input(int[] arr) {
    for (int i = 0; i < arr.length; i++) {
      arr[i] = sc.nextInt();
    }
  }

  public static void PT(int[] arr, int target) {
    for (int i = 0; i < arr.length - 2; i++) {
      for (int j = i + 1; j < arr.length - 1; j++) {
        for (int k = j + 1; k < arr.length; k++) {
          if (((arr[j] + arr[i] + arr[k]) == target)) {
            System.out.println(arr[i] + ", " + arr[j] + " and " + arr[k]);
          }
        }

      }
    }
  }
}