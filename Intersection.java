import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

class Solution {
  public static Scanner sc = new Scanner(System.in);

  public static void main(String args[]) {
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

    Arrays.sort(arr1);
    Arrays.sort(arr2);

    System.out.println(Arrays.toString(intersect(arr1, arr2).toArray()));

  }

  public static void input(int[] arr) {
    for (int i = 0; i < arr.length; i++) {
      arr[i] = sc.nextInt();
    }
  }

  public static List intersect(int[] arr1, int[] arr2) {
    List<Integer> list = new ArrayList<>();
    for (int i = 0; i < arr1.length; i++) {
      for (int j = 0; j < arr2.length; j++) {
        if (arr1[i] == arr2[j]) {
          list.add(arr1[i]);
          arr2[j]=10;
          break;
        }
      }
    }
    return list;
  }

}