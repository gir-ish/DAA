package Recursion;
import java.util.Random;
import java.util.Scanner;

public class Linear_Search {    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = input.nextInt();
        int[] array = new int[size];
        Random random = new Random();
        // Generate random elements
        for (int i = 0; i < size; i++) {
            array[i] = random.nextInt(1000); 
        }
        System.out.println("Generated array:");
        for (int element : array) {
            System.out.print(element + " ");
        }
        System.out.println(); // Move to the next line for better formatting 
        System.out.println("Enter the target");     
        int target = input.nextInt();
        
        int result=Linear_Searching(array,0,size,target);  
        if (result != -1) {
            System.out.println("Element " + target + " found at index " + result);
        } else {
            System.out.println("Element " + target + " not found in the array");
        }
        input.close();
    }
    static int Linear_Searching(int array[],int low,int size,int target){
        if(low<size){
            if(array[low]==target){
                return low;
            }
            else{
                return Linear_Searching(array, low+1, size, target);
            }
        }
        return -1;
    }
}