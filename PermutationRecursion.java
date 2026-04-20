import java.util.Scanner;

public class PermutationRecursion {

    // Function to swap characters
    static String swap(String str, int i, int j) {
        char[] charArray = str.toCharArray();
        char temp = charArray[i];
        charArray[i] = charArray[j];
        charArray[j] = temp;
        return String.valueOf(charArray);
    }

    // Recursive function
    static void permute(String str, int l, int r) {

        if (l == r)
            System.out.println(str);
        else {

            for (int i = l; i <= r; i++) {

                str = swap(str, l, i);     // Swap
                permute(str, l + 1, r);    // Recursive call
                str = swap(str, l, i);     // Backtrack
            }
        }
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String str = sc.nextLine();

        System.out.println("Permutations are:");

        permute(str, 0, str.length() - 1);
    }
}
