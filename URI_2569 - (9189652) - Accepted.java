import java.io.IOException;
import java.util.Scanner;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner scanner = new Scanner(System.in);

        String num1 = scanner.next();
        String op = scanner.next();
        String num2 = scanner.next();

        scanner.close();

        num1 = num1.replace('7',  '0');
        num2 = num2.replace('7', '0');

        int numa = Integer.parseInt(num1);
        int numb = Integer.parseInt(num2);

        int res;
        if(op.equals("+")){
            res = numa + numb;
        }else {
            res = numa * numb;
        }

        String rest = String.valueOf(res).replace('7', '0');

        System.out.println(Integer.parseInt(rest));
 
    }
 
}