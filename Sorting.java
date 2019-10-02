import java.util.Arrays;
import java.util.Scanner;

class Sorting {
  public static Scanner sc = new Scanner(System.in);

  public static void main(String args[]) {
    int size = sc.nextInt();
    if (size < 0)
      return;
    int[] arr1 = new int[size];
    int[] arr2 = new int[size];
    int[] arr3 = new int[size];
    input(arr1);
    input(arr2);
    input(arr3);
    Arrays.sort(arr1);
    Arrays.sort(arr2);
    Arrays.sort(arr3);

    display(arr1);
    display(arr2);
    display(arr3);

  }

  public static void input(int[] arr) {
    for (int i = 0; i < arr.length; i++) {
      arr[i] = sc.nextInt();
    }
  }

  public static void swap(int[] arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }

  public static void reverse(int[] arr, int start, int end) {
    while (start < end) {
      swap(arr, start, end);
      start++;
      end--;
    }
  }

  public static void display(int[] arr) {
    for (int var : arr) {
      System.out.print(var + "  ");
    }
  }

}