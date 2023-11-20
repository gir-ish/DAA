package Git_work.DAA;

import java.util.Random;
import java.util.Scanner;

public class Binary_Search {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = input.nextInt();
        int[] array = new int[size];

        Random random = new Random();

        // Generate random elements
        for (int i = 0; i < size; i++) {
            if(i==0){
                array[i] = random.nextInt(1000);     
            }
            else{
                array[i] = array[i-1]+random.nextInt(1000); 
            }
        }
        System.out.println("Generated array:");
        for (int element : array) {
            System.out.print(element + " ");
        }
        System.out.println(); // Move to the next line for better formatting


        int target=input.nextInt();
        int result=Binary_Search_Recursion(array,0,size,target);
        if (result != -1) {
            System.out.println("Element " + target + " found at index " + result);
        } else {
            System.out.println("Element " + target + " not found in the array");
        }
        input.close();

    }    
    static int Binary_Search_Recursion(int array[],int low,int size,int target){
        if(low<=size){
            int mid = low + (size - low) / 2;
            if(array[mid]==target){
                return mid;
            }
            else if(array[mid]<target){
                return Binary_Search_Recursion(array, mid+1, size, target);
            }
            else if(array[mid]>target){
                return Binary_Search_Recursion(array, low, mid-1, target);
            }
        }
        return -1;
    }
}
