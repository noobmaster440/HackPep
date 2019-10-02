import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class AllSubsets {
  public static Scanner sc = new Scanner(System.in);

  public static void main(String args[]) {
    int size = sc.nextInt();
    if (size < 0)
      return;
    int[] arr = new int[size];
    input(arr);
    printSubsets(arr);

  }

  public static void input(int[] arr) {
    for (int i = 0; i < arr.length; i++) {
      arr[i] = sc.nextInt();
    }
  }

  public static void printSubsets(int[] arr) {
    int max = 1;
    for (int i = 1; i <= arr.length; i++) {
      max *= 2;
    }
    int[] binary = new int[arr.length];
    for (int r = 0; r < max; r++) {
      int divisor = r;
      for (int j = arr.length - 1; j >= 0; j--) {
        binary[j] = divisor % 2;
        divisor /= 2;
      }
      System.out.print("[");
      for (int j = 0; j < binary.length; j++) {
        if (binary[binary.length-j-1] == 1) {
          System.out.print(arr[j] + " ");
        }
      }
      System.out.print("]");
      System.out.println();
    }
  }

}