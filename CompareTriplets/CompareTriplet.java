import java.util.Scanner;

class CompareTriplet{
    public static void main(String args[])
    {
        int alice[] = new int[3];
        int bob[]= new int[3];
        Scanner sc = new Scanner(System.in); 
        int scorea=0;
        int scoreb=0;

        System.out.println("Enter The Scores Of Alice");

        for(int i=0;i<3;i++)
        {
            alice[i]=sc.nextInt();
        }

        System.out.println("Enter The Scores Of Bob");

        for(int i=0;i<3;i++)
        {
            bob[i]=sc.nextInt();
        }

        for(int i=0;i<3;i++){
            if(alice[i]==bob[i]){
                continue;
            }
            else if(alice[i]>bob[i]){
                scorea++;
            }
            else{
                scoreb++;
            }
        }

        System.out.print(scorea+" ");
        System.out.print(scoreb);
    }
}