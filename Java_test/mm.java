import java.util.Scanner;

class apples {
    public void print() {
        System.out.println("Hello Java");
        return;
    }
}

public class mm {
    int g_x;
    public static void main(String[] args) {

        apples ap = new apples();
        ap.print();

        System.out.println("Hello World!");
        int x = 0;
        x++;
        ++x;
        
        mm fMm = new mm();
        System.out.println(fMm.g_x);


        System.out.println(five(x--));
        System.out.println(x);

        Scanner ds = new Scanner(System.in);
        int number = ds.nextInt();
        System.out.println(number);

        Scanner sc = new Scanner(System.in);
        String name = sc.next();
        System.err.println(name);
    }

    public static int five(int x){
        return x;
    }
    
}

