package DAA;

/**
 * BackTracking
 */
public class Permutation_String {
    public static void print_permutation(String str, String perm) {
        if (str.length() == 0) {
            System.out.println(perm);
        } else {
            for (int i = 0; i < str.length(); i++) {
                char currChar = str.charAt(i);
                String newStr = str.substring(0, i) + str.substring(i + 1);
                print_permutation(newStr, perm + currChar);
            }
        }
    }

    public static void main(String[] args) {
        String str = "123";
        print_permutation(str, "");
    }
}
