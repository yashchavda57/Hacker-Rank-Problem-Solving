import java.util.Scanner;

class BigSum1 {
    public static void main(String[] args){
        int n;
        int[]  arr=new int[1000];
        Scanner sc = new Scanner(System.in);
        long sum = 0;

        n = sc.nextInt();
        System.out.println("Enter "+ n + "Values:");
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
             sum = sum + arr[i];
     
        }
        System.out.println(sum);
    }

}